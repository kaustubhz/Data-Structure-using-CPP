#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

template <class T>
class Node
{
	private:
		T data;
		Node *next;
		Node *prev;
	public:
		Node();
		void SetData(T);
		T GetData();
		void SetNext(Node*);
		Node<T>* GetNext();
		void SetPrev(Node*);
		Node<T>* GetPrev();
		~Node();
};

#endif
