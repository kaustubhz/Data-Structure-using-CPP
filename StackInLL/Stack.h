#ifndef STACK_H
#define STACK_H
#include"LinkedList.h"
template<class T>
class MyStack
{
	private:
		LinkedList<T> ll;
	public:
		bool IsEmpty();
		bool IsFull();
		T Peep();
		T Pop();
		void Push(T);
		void DisplayStack();
};

#endif
