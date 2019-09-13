#include"Stack.h"

template <class T>
bool MyStack<T>::IsEmpty()
{
	return ll.IsEmpty();
}

template <class T>
bool MyStack<T>::IsFull()
{
	return false;
}

template <class T>
T MyStack<T>::Peep()
{
	if(IsEmpty())
	{
		throw runtime_error("Stack is Empty");
	}
	return ll.GetHead();
}

template <class T>
T MyStack<T>::Pop()
{
	T ele;
	if(IsEmpty())
	{
		throw runtime_error("Stack is Empty");
	}
	ele=ll.DeleteAtBegin();
	return ele;
}

template <class T>
void MyStack<T>::Push(T ele)
{
	if(IsFull())
	{
		throw runtime_error("Stack is Full");
	}
	ll.AddAtBegin(ele);
}

	template <class T>
void MyStack<T>::DisplayStack()
{
	ll.DisplayAll();
}



//Explicit instantiation

template class MyStack<int>;
template class MyStack<char>;
template class MyStack<double>;
