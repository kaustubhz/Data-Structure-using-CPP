#include"Node.cpp"
#include"Student.h"

template <class T>
class LinkedList
{
	private:
		string course;
		Node<T> *head;
		Node<T> *tail;
		int count;
	public:
		LinkedList();
		int Size();
		
		bool IsEmpty();
		bool IsFull();

		string GetCourse();				
		void AcceptCourse();
		void DisplayCourse();

		void AddAtBegin(T);
		T DeleteAtBegin();
		
		void DisplayAll();
		void AddAtEnd(T);
		
		T DeleteAtEnd();
		void InsertAt(int,T);
		
		void Reverse();
		~LinkedList();
};
