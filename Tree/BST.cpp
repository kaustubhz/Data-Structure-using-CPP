//BST.cpp

#include"BST.h"

	template <class T>
BST<T>::BST():root(nullptr),count(0)
{
	cout<<"Root Initialized to null"<<endl;
}

	template <class T>
BST<T>::~BST()
{
	cout<<"Root Initialized to DTOR"<<endl;
	Delete(GetRoot());
}

	template <class T>
TreeNode<T>* BST<T>::GetRoot()
{
	return root;
}
	template <class T>
int BST<T>::GetCount()
{
	return count;
}

	template <class T>
void BST<T>:: SetCount(int cnt)
{
	count=cnt;
}

	template <class T>
bool BST<T>::Insert(T ele)
{
	bool bSuccess=false;
	TreeNode<T> *temp= new TreeNode<T>;
	temp->SetData(ele);
	temp->SetLeft(nullptr);
	temp->SetRight(nullptr);
	if(root==nullptr)
	{
		root=temp;
		count++;
		bSuccess=true;
	}
	else
	{
		TreeNode<T>* current=root;
		while(current!=nullptr)
		{
			//For left side
			if(ele < current->GetData())
			{
				if(current->GetLeft()==nullptr)
				{
					current->SetLeft(temp);
					break;
				}
				else
				{
					current=current->GetLeft();			
				}
			}
			else
			{
				if(current->GetRight()==nullptr)
				{
					current->SetRight(temp);
					break;
				}
				else
				{
					current=current->GetRight();			
				}
			}
		}
		count++;
		bSuccess=true;
	}
	return bSuccess;
}

	template <class T>
void BST<T>::InOrder(TreeNode<T> *temp)
{
	if(temp!=nullptr)
	{
		InOrder(temp->GetLeft());
		cout<<temp->GetData()<<" <--> ";
		InOrder(temp->GetRight());
	}
}

	template <class T>
void BST<T>::PreOrder(TreeNode<T> *temp)
{
	if(temp!=nullptr)
	{
		cout<<temp->GetData()<<" <--> ";
		PreOrder(temp->GetLeft());
		PreOrder(temp->GetRight());
	}
}

	template <class T>
void BST<T>::PostOrder(TreeNode<T> *temp)
{
	if(temp!=nullptr)
	{
		PostOrder(temp->GetLeft());
		PostOrder(temp->GetRight());
		cout<<temp->GetData()<<" <--> ";
	}
}

	template <class T>
void BST<T>::FindMinimum(TreeNode<T> *temp)
{
	while(temp->GetLeft()!=nullptr)
	{
		temp=temp->GetLeft();
	}
	cout<<"\nMinimum = "<<temp->GetData()<<endl;

}

	template <class T>
void BST<T>::FindMaximum(TreeNode<T> *temp)
{
	while(temp->GetRight()!=nullptr)
	{
		temp=temp->GetRight();
	}
	cout<<"\nMaximum = "<<temp->GetData()<<endl;

}

	template <class T>
void BST<T>::Delete(TreeNode<T> *temp)
{
	if(temp!=nullptr)
	{
		cout<<"inside delete"<<endl;
		Delete(temp->GetLeft());
		Delete(temp->GetRight());
		temp->SetLeft(nullptr);
		temp->SetRight(nullptr);
		//count--;
		//int tem=BST<T>::GetCount()-1;
		//SetCount(tem);
	}
	delete temp;
}

	template <class T>
bool BST<T>::SearchInTree(T ele)
{
	TreeNode<T>* temp=root;
	while(nullptr!=temp)
	{
		if(ele==temp->GetData())
		{
			return true;
		}
		else if(ele< temp->GetData())
		{
			temp=temp->GetLeft();
		}
		else
		{
			temp=temp->GetRight();
		}
	}
	return false;
}


template class BST<int>;
template class BST<string>;
template class BST<double>;
