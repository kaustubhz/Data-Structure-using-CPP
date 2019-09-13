#include"QueueInLL.h"

template <class T>
MyQueue<T>::MyQueue()
{
}

template <class T>
MyQueue<T>::~MyQueue()
{
}


template <class T>
void MyQueue<T>::AddQueue(T elem)
{
	ll.AddAtEnd(elem);
}


template <class T>
T MyQueue<T>::DelQueue()
{
	return ll.DeleteAtBegin();
}

template <class T>
void MyQueue<T>::DisplayQueue()
{
	ll.DisplayAll();
}

template <class T>
bool MyQueue<T>::IsFull()
{
	return ll.IsFull();
}

template <class T>
bool MyQueue<T>::IsEmpty()
{
	return ll.IsEmpty();
}
