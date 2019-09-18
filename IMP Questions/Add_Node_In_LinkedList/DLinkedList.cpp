#include"DLinkedList.h"

template <class T>
DLinkedList<T>::DLinkedList():head(nullptr),tail(nullptr),count(0)
{
	cout<<endl<<"Linked List started";
}

template <class T>
DLinkedList<T>::~DLinkedList()
{
	cout<<endl<<"Linked List destroyed";
}

template <class T>
int DLinkedList<T>:: GetCount()
{
	return count;
}

template <class T>
void DLinkedList<T>:: SetCount(int cnt)
{
	count=cnt;
}

template <class T>
Node<T>* DLinkedList<T>:: GetHead()
{
	return head;
}

template <class T>
void DLinkedList<T>:: SetHead(Node<T>* hd)
{
	head=hd;
}

template <class T>
Node<T>* DLinkedList<T>:: GetTail()
{
	return tail;
}

template <class T>
void DLinkedList<T>:: SetTail(Node<T>* tl)
{
	tail=tl;
}

template <class T>
void DLinkedList<T>:: AddAtBegin(T element)
{
	Node<T> *temp=new Node<T>;

	temp->SetData(element);
	temp->SetNext(nullptr);
	temp->SetPrev(nullptr);

	if(head==nullptr and tail==nullptr)
	{
		head=tail=temp;
	//	head->SetNext(tail);
	//	tail->SetPrev(head);
		return;
	}

	temp->SetNext(head);
	head->SetPrev(temp);
	head=temp;

}


template <class T>
void DLinkedList<T>:: Display()
{
	Node<T>* temp=head;
	for(;temp!=nullptr;temp=temp->GetNext())
	//while(temp!=nullptr)
	{
		cout<<temp->GetData()<<" <-->";
	//	temp=temp->GetNext();
	}
	cout<<"END"<<endl;
}

template <class T>
void DLinkedList<T>:: SortLinkedList(Node<T>* temp)
{

}

template class DLinkedList<int>;
template class DLinkedList<double>;
template class DLinkedList<string>;
