#ifndef LinkedList_H
#define LinkedList_H

#include"Node.cpp"


template<class T>
class LinkedList
{
	private:
		int totalNodes;
		Node<T>* headNode;
		Node<T>* tailNode;

	public:
		LinkedList();

		int GetTotalNodes();

		Node<T>* GetHeadNode();
		void AddAtRear(T);
		T DeleteAtFront();

		bool IsEmpty();
		bool IsFull();	

		void DisplayAllNodes();
		void SortAllAddresses();
		
		~LinkedList();
		
};

#endif
