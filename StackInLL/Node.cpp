//File name: Node.cpp

#include"Node.h"

template <class T>
Node<T>::Node()
{
	//Node Default CTOR
}

template <class T>
Node<T>::~Node()
{
	//Node DTOR
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

//Explicit Instantiation for template
template class Node<int>;
template class Node<char>;
template class Node<double>;
