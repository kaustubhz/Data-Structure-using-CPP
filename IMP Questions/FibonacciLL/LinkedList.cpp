#include"LinkedList.h"

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
void LinkedList<T>::AddAtEnd(T elem)
{
	Node<T> *temp=new Node<T>;
	temp->SetData(elem);
	temp->SetNext(nullptr);	
	temp->SetPrev(nullptr);	
	if(!IsEmpty())
	{
		tail->SetNext(temp);
		tail=temp;
	}
	else
	{
		head=tail=temp;	
	}
	count++;
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
	while(temp!=nullptr)
	{
		cout<<temp->GetData()<<" >>> ";
		temp=temp->GetNext();
	}
	cout<<"NULL"<<endl;
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
	temp->SetNext(newnode);
	count++;
}


	template <class T>
void LinkedList<T>::AddNext(int n)
{
	Node<T>* temp1=head;
	Node<T>* temp2=head->GetNext();
	for(int i=1;i<=n-2;i++)
	{		
		AddAtEnd(temp1->GetData()+temp2->GetData());
		temp1=temp1->GetNext();
		temp2=temp2->GetNext();
	}
}
	
	template <class T>
void LinkedList<T>::SubNext(int n)
{
	Node<T>* temp1=head;
	Node<T>* temp2=head->GetNext();
	for(int i=1;i<=n-2;i++)
	{		
		AddAtEnd(temp2->GetData()-temp1->GetData());
		temp1=temp1->GetNext();
		temp2=temp2->GetNext();
	}
}

	template <class T>
LinkedList<T>::~LinkedList()
{
	Node<T> *temp=head;

	while(head!=nullptr)
	{
		temp=head;
		delete temp;
		head=head->GetNext();
	}

	head=tail=nullptr;
	cout<<"\nLinked List deleted";
}

//template class LinkedList<int>;
