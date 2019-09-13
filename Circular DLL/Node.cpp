#include"Node.h"

template <class T>
Node<T>::Node()
{}

template <class T>
Node<T>::~Node()
{
	
}

template <class T>
void Node<T>::SetData(T ele)
{
	data=ele;
}

template <class T>
T Node<T>::GetData()
{
	return data;
}

template <class T>
void Node<T>::SetNext(Node *temp)
{
	next=temp;
}

template <class T>
Node<T>* Node<T>::GetNext()
{
	return next;
}

template <class T>
void Node<T>::SetPrev(Node *temp)
{
	prev=temp;
}

template <class T>
Node<T>* Node<T>::GetPrev()
{
	return prev;
}

template class Node<int>;
template class Node<char>;
template class Node<double>;
