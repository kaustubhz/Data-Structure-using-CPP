#include"DeQueueLL.h"

template<class T>
bool DeQueueLL<T>::IsFull()
{
	return ll.IsFull();	
}

template<class T>
bool DeQueueLL<T>::IsEmpty()
{
	return ll.IsEmpty();	
}

template<class T>
void DeQueueLL<T>::AddAtFront(T elem)
{
	ll.AddAtBegin(elem);
}

template<class T>
void DeQueueLL<T>::AddAtRear(T elem)
{
	ll.AddAtEnd(elem);
}

template<class T>
T DeQueueLL<T>::DeleteAtFront()
{
	return ll.DeleteFromBegin();
}

template<class T>
T DeQueueLL<T>::DeleteAtRear()
{
	return ll.DeleteFromEnd();
}

template<class T>
void DeQueueLL<T>::DisplayQueue()
{
	ll.DisplayAll();
}
template class DeQueueLL <int>;
template class DeQueueLL <char>;
template class DeQueueLL <double>;
