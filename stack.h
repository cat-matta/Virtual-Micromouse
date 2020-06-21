
#define MAX 256

template <class Item>
class stack{
public:
	stack(){top=-1;}
	void push(Item x);
	void pop();
	bool isEmpty() {return top==-1;}
	Item peek(){return arr[top];}
private:
	Item top;
	Item arr[MAX];
};


#include "stack.template"