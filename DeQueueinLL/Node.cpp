#include"Node.h"

template<class T>

T Node<T>::GetData()
{
	return data;
}

template<class T>

void Node<T>::SetData(T elem)
{
	data=elem;
}


template<class T>

Node<T>* Node<T>::GetNext()
{
	return next;
}

template<class T>

void Node<T>::SetNext(Node<T>* nex)
{
	next=nex;
}

template<class T>

Node<T>* Node<T>::GetPrev()
{
	return prev;
}

template<class T>

void Node<T>::SetPrev(Node<T>* pre)
{
	prev=pre;
}

template class Node<int>;
template class Node<char>;
template class Node<double>;
