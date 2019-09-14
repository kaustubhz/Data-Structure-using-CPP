#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include"Node.h"

template<class T>
class LinkedList
{
	private:
		Node<T> *head;
		Node<T> *tail;

	public:
		LinkedList();
		~LinkedList();

		bool IsEmpty();
		bool IsFull();

		void AddAtBegin(T);
		T DeleteFromBegin();

		void AddAtEnd(T);
		T DeleteFromEnd();

		void DisplayAll();

};

#endif
