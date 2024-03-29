#include"CDLinkedList.h"

template <class T>
LinkedList<T>::LinkedList():count(0),head(nullptr),tail(nullptr)
{}

template <class T>
bool LinkedList<T>::IsEmpty()
{
	return (nullptr==head && nullptr==tail);
}

template <class T>
bool LinkedList<T>::IsFull()
{
	return false;
}

template <class T>
int LinkedList<T>::Size()
{
	return count;
}
template <class T>
void LinkedList<T>::AddAtBegin(T ele)
{
	Node<T> *t=new Node<T>;
	t->SetData(ele);
	t->SetNext(nullptr);
	t->SetPrev(nullptr);
	if(IsEmpty())
	{
		head=t;
		tail=t;
		head->SetNext(tail);
		head->SetPrev(tail);

		tail->SetNext(head);
		tail->SetPrev(head);
	}
	else
	{
		t->SetNext(head);
		t->SetPrev(tail);
		tail->SetNext(t);		
		head=t;
	}
		count++;
}

template <class T>
void LinkedList<T>::AddAtEnd(T elem)
{
	Node<T> *temp=new Node<T>;
	temp->SetData(elem);
	temp->SetNext(nullptr);	
	temp->SetPrev(nullptr);	
	if(!IsEmpty())
	{
		tail->SetNext(temp);
		temp->SetPrev(tail);
		temp->SetNext(head);
		head->SetPrev(temp);
		tail=temp;
	}
	else
	{
		head=tail=temp;	
		head->SetNext(tail);
		head->SetPrev(tail);

		tail->SetNext(head);
		tail->SetPrev(head);
	}
	count++;
}

template <class T>
T LinkedList<T>::DeleteAtBegin()
{
	T ele;
	if(!IsEmpty())
	{
		Node<T> *t=head;
		ele=head->GetData();
		if(head==tail)
		{
			head=nullptr;
			tail=nullptr;
			delete t;
		}
		else
		{
			head=head->GetNext();	
			head->SetPrev(tail);
			tail->SetNext(head);		
			delete t;
			cout<<"Deleted "<<ele<<" at beginning"<<endl;
		}
			count--;
	}
	return ele;
}

template <class T>
void LinkedList<T>::DisplayAll()
{
	Node<T> *temp=head;
	if(temp==nullptr)
	{
		cout<<"\nLinked List empty"<<endl;
		return;
	}
	cout<<temp->GetData()<<"<==>";
	temp=temp->GetNext();
	while(temp!=head)
	{
		cout<<temp->GetData()<<"<==>";
		temp=temp->GetNext();
	}
	cout<<head->GetData()<<endl;
}

template <class T>
T LinkedList<T>::DeleteAtEnd()
{
	T ele;
	if(!IsEmpty())
	{
		Node<T> *t=tail;
		ele=tail->GetData();
		if(head==tail)
		{
			head= nullptr;
			tail=nullptr;
			delete t;
			count--;
		}
		else
		{
			tail=tail->GetPrev();
			tail->SetNext(head);
			head->SetPrev(tail);
			delete t;
			count--;
		}
	}
	return ele;
}

template <class T>
void LinkedList<T>::InsertAt(int pos,T elem)
{
	if(pos>=count and pos<=0)
	{
		cout<<"Please insert at appropriate position";
		return;
	}
	Node<T>*temp=head;
	for(int i=1;i<pos-1;temp=temp->GetNext(),i++);
	
	Node<T> *newnode=new Node<T>;
	newnode->SetData(elem);

	newnode->SetNext(temp->GetNext());
	newnode->SetPrev(temp);
	temp->SetNext(newnode);
	count++;
}
/*
template <class T>
void LinkedList<T>::Reverse()
{
	Node<T> *temp=head,*temp1=head;
	head=head->GetNext();
//	temp->SetNext(nullptr);
//	temp->SetPrev(nullptr);
	tail=temp;
	while(temp1!=temp)
	{
		temp1->SetNext(temp);
		temp1->SetPrev(head);
		temp->SetPrev(temp1);
	}
	head=temp1;

	while(temp!=tail)
	{
		temp1=temp;
		temp1->SetNext(temp->GetPrev());
		temp1->SetPrev(temp->GetNext());
		temp=temp->SetNext();
		head=temp1;
	}
}
*/
template <class T>
LinkedList<T>::~LinkedList()
{
	Node<T> *temp=head;
	head=head->GetNext();
	delete temp;
	while(head!=temp)
	{
		temp=head;
		delete temp;
		head=head->GetNext();
	}
	head=tail=nullptr;
	cout<<"\nLinked List deleted";
}

template class LinkedList<int>;
