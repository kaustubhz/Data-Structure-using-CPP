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
void LinkedList<T>::AddAtBegin(T ele)
{
	Node<T> *t=new Node<T>;
	t->SetData(ele);
	t->SetNext(nullptr);
	if(IsEmpty())
	{
		head=t;
		tail=t;
		count++;
	}
	else
	{
		t->SetNext(head);
		head=t;
		count++;
	}
}

template <class T>
void LinkedList<T>::AddAtEnd(T elem)
{
	Node<T> *temp=new Node<T>;
	temp->SetData(elem);
	temp->SetNext(nullptr);	
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
			count--;
		}
		else
		{
			head=head->GetNext();			
			delete t;
			cout<<"Deleted "<<ele<<" at beginning"<<endl;
			count--;
		}
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
	while(temp!=nullptr)
	{
		cout<<temp->GetData()<<"-->";
		temp=temp->GetNext();
	}
	cout<<"NULL"<<endl;
}

template <class T>
T LinkedList<T>::DeleteAtEnd()
{
	T ele;
	if(!IsEmpty())
	{
		Node<T> *t=head;
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
			while(t->GetNext()!=tail)
			{
				t=t->GetNext();
			}
			t->SetNext(nullptr);
			delete tail;
			tail=t;
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
	temp->SetNext(newnode);
	count++;
}

template <class T>
void LinkedList<T>::Reverse()
{
	Node<T> *nhead=head,*temp=nullptr;	

	head=head->GetNext();
	//nhead->SetData(head->GetData());
	nhead->SetNext(nullptr);
	tail=nhead;
		//cout<<"Inside else"<<endl;
//	cout<<"Head value "<<head<<endl;
	while(head!=nullptr)
		{
//			cout<<"Inside while"<<endl;
			temp=head;
			head=head->GetNext();
			temp->SetNext(nhead);
			nhead=temp;
		}
		head=nhead;

}

//template class LinkedList<int>;
