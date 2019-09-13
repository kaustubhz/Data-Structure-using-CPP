//File name: LinkedList.h

//Header Guard
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include"Node.h"

//Templatized class for linkedlist
template <class T>
class LinkedList
{
	private:
		Node<T> *head;        //head node
		Node<T> *tail;        //tail node
		int count;            //to calculate nodes in linkedlist
	public:
		LinkedList();
		int Size();

		bool IsEmpty();
		bool IsFull();

		void AddAtBegin(T);          
		T DeleteAtBegin();

		//void AddAtEnd(T);
		//T DeleteAtEnd();

		T GetHead();             //Accessor: in order to peep in stack
		T GetTail();             //Accessor: in order to peep in queue

		void DisplayAll();

		//void InsertAt(int,T);     //Inserting node at given position

		//void Reverse();           //Reversing linkedlist
		~LinkedList();           
};

#endif
