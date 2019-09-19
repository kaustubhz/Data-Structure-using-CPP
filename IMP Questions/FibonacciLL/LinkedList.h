#include"Node.h"

template <class T>
class LinkedList
{
	private:
		Node<T> *head;
		Node<T> *tail;
		int count;
	public:
		LinkedList();
		int Size();
		bool IsEmpty();
		bool IsFull();
		void DisplayAll();
		void AddAtEnd(T);
		void AddNext(int);
		void SubNext(int);
		void InsertAt(int,T);
		~LinkedList();
};
