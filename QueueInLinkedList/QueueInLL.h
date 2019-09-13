//Header guard

#ifndef QUEUEINLL_H
#define QUEUEINLL_H

#include"LinkedList.h"
template <class T>
class MyQueue
{
	private:
		LinkedList<T> ll;
	public:
		MyQueue();
		void AddQueue(T);
		T DelQueue();
		void DisplayQueue();
		bool IsEmpty();
		bool IsFull();
		~MyQueue();
};

#endif
