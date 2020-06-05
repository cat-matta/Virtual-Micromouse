#include "stack.h"
#include <cassert>

void stack::push(int x){
	assert(top<MAX);
	arr[++top]=x;

}

void stack::pop(){
	assert(!isEmpty());
	arr[top--];
}
