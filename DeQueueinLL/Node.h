#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

template<class T>
class Node
{
	private:
		T data;
		Node* next;
		Node* prev;
	
	public:
		T GetData();
		void SetData(T);

		Node* GetNext();
		void SetNext(Node<T>*);
		
		Node* GetPrev();
		void SetPrev(Node<T>*);
};

#endif
