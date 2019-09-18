#include"DLinkedList.h"

int main()
{
	int choice;
	DLinkedList<int> objLL1,objLL2;

	do
	{
		cout<<endl<<"*******MENU*******";
		cout<<endl<<"1. Add for list 1";
		cout<<endl<<"2. Add for list 2";
		cout<<endl<<"3. Display lists";
		cout<<endl<<"5. EXIT";
		cout<<endl<<"Enter your choice: ";
		cin>>choice;
		cin.get();

		switch(choice)
		{
			case 1:
				{
					int number;
					cout<<endl<<"Enter a number: ";
					cin>>number;
					objLL1.AddAtBegin(number);
					cout<<endl<<"Number inserted in list 1"<<endl;
				}
				break;
			case 2:
				{
					int number;
					cout<<endl<<"Enter a number: ";
					cin>>number;
					objLL2.AddAtBegin(number);
					cout<<endl<<"Number inserted in list 2"<<endl;
				}
				break;

			case 3:
				{
					cout<<endl<<"List 1 contents are"<<endl;
					objLL1.Display();
					cout<<endl<<"List 2 contents are"<<endl;
					objLL2.Display();
			       }
				break;
			default:cout<<endl<<"Please enter a valid choice";
		}
	}while(choice!=5);
	return 0;
}
