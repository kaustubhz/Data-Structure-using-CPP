#include"Node.h"


template<class T>
Node<T>::Node():next(nullptr),prev(nullptr)
{

}

template<class T>
T Node<T>:: GetData()
{
	return data;
}

template<class T>
void Node<T>:: SetData(T element)
{
	data=element;
}

template<class T>
Node<T>* Node<T>:: GetNext()
{
	return next;
}

template<class T>
void Node<T>:: SetNext(Node<T>* nodeNext)
{
	 next=nodeNext;
}

template<class T>
Node<T>* Node<T>:: GetPrev()
{
	return prev;
}

template<class T>
void Node<T>:: SetPrev(Node<T>* nodePrev)
{
	 prev=nodePrev;
}


template<class T>
Node<T>::~Node()
{

}

