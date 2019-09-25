#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList()
{
	headNode = tailNode = nullptr;
	totalNodes = 0;
}

template <class T>
int LinkedList<T>::GetTotalNodes()
{
	return totalNodes;
}

template <class T>
bool LinkedList<T>::IsEmpty()
{
	return (headNode == nullptr and tailNode == nullptr);
}

template <class T>
bool LinkedList<T>::IsFull()
{
	return false;
}

template <class T>
void LinkedList<T>::AddAtRear(T data)
{
	Node<T> *tempNode = new Node<T>;
	tempNode->SetData(data);
	if (headNode == nullptr and tailNode == nullptr)
	{
		headNode = tailNode = tempNode;
		return;
	}

	tailNode->SetNext(tempNode);
	tempNode->SetPrev(tailNode);
	tailNode = tempNode;
}

template <class T>
T LinkedList<T>::DeleteAtFront()
{
	T deletedElement;
	Node<T> *tempNode = headNode;
	deletedElement = tempNode->GetData();

	if (tempNode == nullptr)
	{
		throw runtime_error("\nQueue is empty\nUnable to delete\n");
	}

	if (!IsEmpty())
	{
		if (headNode == tailNode)
		{
			headNode = tailNode = nullptr;
			delete headNode;
			delete tailNode;
			return deletedElement;
		}

		headNode = headNode->GetNext();
		headNode->SetPrev(nullptr);
		delete tempNode;
		return deletedElement;
	}
}

template <class T>
void LinkedList<T>::DisplayAllNodes()
{
	Node<T> *tempNode = headNode;

	while (tempNode != nullptr)
	{
		cout << tempNode->GetData() << " <--> ";
		cout << "\nAddress is: " << tempNode->GetData().GetAddress() << endl;
		tempNode = tempNode->GetNext();
	}
	cout << "END" << endl;
}

template <class T>
void LinkedList<T>::SortAllAddresses()
{
	Node<T> *tempNode = headNode;
	Node<T>* temp1Node;
	//cout<<endl<<"Addresses are: "<<endl;
	if (headNode != nullptr)
	{
		if(headNode==tailNode)
		{
				cout<<"\nOnly one node present";
				return;
		}		

		while (tempNode != nullptr)
		{cout<<endl<<"Outside outer loop"<<endl;
			temp1Node=tempNode->GetNext();
			while(temp1Node!=nullptr)
			{cout<<endl<<"Inside outer loop"<<endl;
				if( ( tempNode->GetData().GetAddress().compare( temp1Node->GetData().GetAddress() ) )<0)
				{
					cout<<"\nInside if"<<endl;
					Node<T>* temp3Node;
					cout<<"\nAfter node"<<endl;
					temp3Node=tempNode;
					tempNode=temp1Node;
					temp1Node=temp3Node;
					/*temp3Node->SetData(tempNode->GetData());
					tempNode->SetData(temp1Node->GetData());
					temp1Node->SetData(temp3Node->GetData());*/
				}

			}
		}
		cout << "Address sorted" << endl;
	}
}

template <class T>
Node<T> *LinkedList<T>::GetHeadNode()
{
	return headNode;
}
template <class T>
LinkedList<T>::~LinkedList()
{
	cout << endl
		 << "LinkedList destroyed";
}

//template class LinkedList<int>;
template class LinkedList<RetailShopOwner>;
