
#define MAX 256

class stack{
public:
	stack(){top=-1;}
	void push(int x);
	void pop();
	bool isEmpty() {return top==-1;}
	int peek(){return arr[top];}
private:
	int top;
	int arr[MAX];
};
