#ifndef NODE_H
#define NODE_H
#include"RetailShopOwner.h"
#include<iostream>
using namespace std;

template<class T>
class Node
{
	private:
		//Data members
		T data;
		Node<T> *next;
		Node<T> *prev;

	public:
		//Member functions
		Node();
		
		T GetData();
		void SetData(T);
		
		Node<T>* GetNext();
		void SetNext(Node<T>*);
		
		Node<T>* GetPrev();
		void SetPrev(Node<T>*);		
		~Node();
};

#endif
