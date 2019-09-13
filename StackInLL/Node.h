//File Name: Node.h

//Header guard defined

#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;

template <class T>
class Node
{
	private:
		//Data members for Node
		
		T data;
		Node *next;

	public:
		//Member functions

		Node();
		void SetData(T);
		T GetData();
		void SetNext(Node*);
		Node<T>* GetNext();
		~Node();
};

#endif
