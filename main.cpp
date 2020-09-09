#include <iostream>
#include <stack>
#include "API.h" // From the simulator
using std::cout;
using std::endl;
using std::stack;

/*Floodfill pseudocode:
*1)create [16][16] maze
*2)create stack that holds 256 (already made)
*3)put zero in finish cells
*4)fill rest, ignoring walls for now
*5)push current cell to stack
*6)while !s.isempty()
*		pull a cell from the stack
*		is cell+1>greater than next acessible neighbor?
*		if yes--> keep pulling cells and compare
*		if no-->change the current cell to be +1 greater than acessible neighbors
*
*Once we reach the middle cells at [7][7],[7][8],[8][7],[8][8], which contain 0, we are done!
*/
int maze[16][16]={ 
	{14,13,12,11,10,9,8,7,7,8,9,10,11,12,13,14},
	{13,12,11,10,9,8,7,6,6,7,8,9,10,11,12,13},
	{12,11,10,9,8,7,6,5,5,6,7,8,9,10,11,12},
	{11,10,9,8,7,6,5,4,4,5,6,7,8,9,10,11},
	{10,9,8,7,6,5,4,3,3,4,5,6,7,8,9,10},
	{9,8,7,6,5,4,3,2,2,3,4,5,6,7,8,9},
	{8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8},
	{7,6,5,4,3,2,1,0,0,1,2,3,4,5,6,7},  //row 7, where our center is
	{7,6,5,4,3,2,1,0,0,1,2,3,4,5,6,7},  //row 8, where our center is
	{8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8},
	{9,8,7,6,5,4,3,2,2,3,4,5,6,7,8,9},
	{10,9,8,7,6,5,4,3,3,4,5,6,7,8,9,10},
	{11,10,9,8,7,6,5,4,4,5,6,7,8,9,10,11},
	{12,11,10,9,8,7,6,5,5,6,7,8,9,10,11,12},
	{13,12,11,10,9,8,7,6,6,7,8,9,10,11,12,13},
	{14,13,12,11,10,9,8,7,7,8,9,10,11,12,13,14},
};

void setMaze(){
	for(int i=0; i<16; i++){
		for(int j=0; j<16; j++){
			API::setText(i,j,std::to_string(maze[i][j]));
		}
	}
}

void printStack(stack<int> s){
	if (s.empty())  
        return; 
    int x = s.top(); 
    s.pop(); 
    printStack(s); 
    cout << x << " "; 
    s.push(x);
}

int main(int argc, char const *argv[])
{
	// initialize a maze with assigned values
	setMaze();
	stack<int> s; 
	// cout<<(s.empty() ? "stack empty\n" : "stack NOT empty\n"); // checking for proper initialization
	int start_x=0;
	int start_y=15;
	s.push(maze[start_x][start_y]); // we can do this around the other corners too like [0][0],[15][0],[15][15].

	while(!s.empty()&&maze[start_x][start_y]!=0){
		int current=s.top();
		cout<< "Start of while \t"<< "x: "<<start_x <<" y: "<<start_y<<endl;

		if (current>maze[start_x][start_y--]){
			s.push(maze[start_x][start_y]);
			cout<<s.top()<<endl;
			current=s.top();
			cout<< "1st if "<<"x: "<<start_x <<" y: "<<start_y<<endl;
	
		}
		else if (current>maze[start_x++][start_y]){
			cout<< "2nd if "<<"x: "<<start_x <<" y: "<<start_y<<endl;
	
			s.push(maze[start_x][start_y]);
			current=s.top();

		}
	}
	cout<<"Peeking : "<<s.top()<<endl;

	cout<<"\nprinting stack... \n";
	printStack(s);
}