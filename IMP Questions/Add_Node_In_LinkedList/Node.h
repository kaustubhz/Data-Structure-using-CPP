#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

template<class T>
class Node
{
	private:
		T data;
		Node<T> *next;
		Node<T> *prev;

	public:
		Node();
		~Node();
		T GetData();
		void SetData(T);

		Node<T>* GetNext();
		void SetNext(Node<T>*);
		
		Node<T>* GetPrev();
		void SetPrev(Node<T>*);
};

#endif
