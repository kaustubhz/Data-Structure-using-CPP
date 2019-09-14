#include"LinkedList.h"
//#include"Node.cpp"
template<class T>
LinkedList<T>::LinkedList():head(nullptr),tail(nullptr)
{

}

template<class T>
bool LinkedList<T>::IsEmpty()
{
	return (head==nullptr and tail==nullptr);
}

template<class T>
void LinkedList<T>::AddAtBegin(T elem)
{
	Node<T>* temp=new Node<T>;
	temp->SetData(elem);
	temp->SetNext(nullptr);
	temp->SetPrev(nullptr);	

	if(!IsEmpty())
	{
		temp->SetNext(head);
		head->SetPrev(temp);
		head=temp;	
		return;
	}

	head=tail=temp;
	head->SetPrev(nullptr);
	head->SetNext(tail);

	tail->SetPrev(head);
	tail->SetNext(nullptr);

}

template<class T>
T LinkedList<T>::DeleteFromBegin()
{
	if(!IsEmpty())
	{
		T elem;
		Node<T>* temp=head;
		elem=temp->GetData();

		if(head==tail)	
		{
		head=tail=nullptr;
		}
		else
		{
		head=head->GetNext();
		head->SetPrev(nullptr);
		}
		delete temp;
		return elem;
	}
	head=tail=nullptr;
	throw runtime_error("Unable to delete\nQueue is already empty");
}

template<class T>
void LinkedList<T>::AddAtEnd(T elem)
{
	Node<T>* temp=new Node<T>;
	temp->SetData(elem);
	temp->SetNext(nullptr);
	temp->SetPrev(nullptr);	

	if(!IsEmpty())
	{
		temp->SetPrev(tail);
		tail->SetNext(temp);
		tail=temp;	
		return;
	}

	head=tail=temp;
	head->SetPrev(nullptr);
	head->SetNext(tail);

	tail->SetPrev(head);
	tail->SetNext(nullptr);

}

	template<class T>
T LinkedList<T>::DeleteFromEnd()
{
	if(!IsEmpty())
	{
		T elem;
		Node<T>* temp=tail;
		elem=temp->GetData();

		if(head==tail)	
		{
		head=tail=nullptr;
		}
		else
		{
		tail=tail->GetPrev();
		tail->SetNext(nullptr);
		}
		delete temp;
		return elem;
	}
	head=tail=nullptr;
	throw runtime_error("Unable to delete\nQueue is already empty");
}

template<class T>
void LinkedList<T>::DisplayAll()
{
	Node<T>* temp=head;
	while(temp!=nullptr)
	{
		cout<<temp->GetData()<<"<-->";
		temp=temp->GetNext();
	}
	cout<<"NULL";
}

template<class T>
bool LinkedList<T>::IsFull()
{
	return false;
}

template<class T>
LinkedList<T>::~LinkedList()
{
	cout<<"\nLinked List destroyed";
}

template class LinkedList<int>;
template class LinkedList<char>;
template class LinkedList<double>;
