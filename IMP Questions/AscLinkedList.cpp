#include<list>
#include<iostream>
using namespace std;

	template<class T>
ostream& operator<<(ostream& out,list<T> &l)
{
	list<int>::iterator temp=l.begin(); 
/*	for(auto &temp:l)
		out<<temp<<" <-->";*/
	for(temp=l.begin();temp!=l.end();temp++)
		out<<*temp<<" <-->";
	out<<"END"<<endl;
	return out;
}
int main()
{
	list<int> ll;
	int choice;
	do
	{
		cout<<endl<<"******MENU******"<<endl;
		cout<<"1. Add "<<endl;
		cout<<"2. Sort "<<endl;
		cout<<"3. Display "<<endl;
		cout<<"4. EXIT"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		cin.get();

		switch(choice)
		{
			case 1:
				{
					int number;
					cout<<endl<<"Enter a number: ";
					cin>>number;
					ll.push_front(number);
				}
				break;
			case 2:
				{
					ll.sort();
					cout<<endl<<"List sorted in ascending order"<<endl;
				}
				break;
			case 3:
				{
					cout<<endl<<"Elements in list are: \n"<<ll<<endl;
				}
				break;

			case 4: 
				{
					cout<<endl<<"EXIT"<<endl;
				}
				break;
			default:
				cout<<endl<<"Please enter a valid choice"<<endl;
		}
	}while(choice!=4);
	return 0;
}
