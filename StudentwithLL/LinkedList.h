#include"Node.cpp"
#include"Student.h"

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
		void AddAtBegin(T);
		T DeleteAtBegin();
		void DisplayAll();
		void AddAtEnd(T);
		T DeleteAtEnd();
		void InsertAt(int,T);
		void Reverse();
		~LinkedList();
};
