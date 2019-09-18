#ifndef DLINKEDLIST_H 
#define DLINKEDLIST_H 
#include"Node.h"

template<class T>
class DLinkedList
{
	private:
		Node<T> *head;
		Node<T> *tail;
		int count;
	
	public:
		DLinkedList();
		~DLinkedList();

		Node<T>* GetHead();
		void SetHead(Node<T>*);

		Node<T>* GetTail();
		void SetTail(Node<T>*);

		int GetCount();
		void SetCount(int);

		void AddAtBegin(T);

		void Display();

		
//		static void SortLinkedList(Node<T>*);
};
#endif 
