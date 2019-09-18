#include<iostream>
#include<list>
using namespace std;

template<class T>
ostream& operator<<(ostream& out,list<T>& li)
{
	list<int>::iterator temp;
	for(temp=li.begin();temp!=li.end();++temp)
	{
		out<<*temp<<" <--> ";
	}
/*	for(auto &temp:list)
		out<<temp<<" <--> ";*/
	out<<"END"<<endl;
	return out;
}

int main()
{
	list<int> linkedlist1,linkedlist2;
	int choice;
	do
	{
		cout<<endl<<"*******MENU*******";
		cout<<endl<<"1. Add in list 1";
		cout<<endl<<"2. Add in list 2";
		cout<<endl<<"3. Display both lists";
		cout<<endl<<"4. Merge both lists";
		cout<<endl<<"5. EXIT";
		cout<<endl<<"Enter your choice: ";
		cin>>choice;
		cin.get();
		
		switch(choice)
		{
			case 1:
				{
					int number;
					cout<<endl<<"Enter a number for list 1: ";	
					cin>>number;
					linkedlist1.push_front(number);
				}
				break;
			case 2:
				{
					int number;
					cout<<endl<<"Enter a number for list 2: ";	
					cin>>number;
					linkedlist2.push_front(number);
				}
				break;

			case 3:
				{
					cout<<endl<<"Elements in Linked list 1 are: \n"<<linkedlist1<<endl;
					cout<<endl<<"Elements in Linked list 2 are: \n"<<linkedlist2<<endl;
				}
				break;
			case 4:
				{
					list<int> linkedlist3;
					linkedlist1.sort();
					linkedlist2.sort();
					linkedlist3.merge(linkedlist1);
					linkedlist3.merge(linkedlist2);
					cout<<endl<<"Both lists are sorted and merged\n"<<linkedlist3;
				}
				break;
			case 5:
				cout<<endl<<"EXITING"<<endl;
				break;
			default: 
				cout<<"\nPlease enter a valid choice";
		}
	}while(choice!=5);	
	return 0;
}
