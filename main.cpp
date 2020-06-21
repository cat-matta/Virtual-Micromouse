#include <iostream>
#include "stack.h"
using namespace std;

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


int main(int argc, char const *argv[])
{
	int maze[16][16]={ // might move to a separate file to make code clean
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

	stack<int> s; // int for now, subject to change
	//cout<<(s.isEmpty() ? "stack empty\n" : "stack NOT empty\n"); // checking for proper initialization

	s.push(maze[0][15]); // we can do this around the other corners too like [0][0],[15][0],[15][15].
	//cout<<s.peek()<<endl;
}
