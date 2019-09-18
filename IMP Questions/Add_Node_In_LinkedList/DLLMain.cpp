#include"DLinkedList.h"

int main()
{
	int choice;
	DLinkedList<int> objLL1;

	do
	{
		cout<<endl<<"*******MENU*******";
		cout<<endl<<"1. Add for list ";
		cout<<endl<<"2. Display lists";
		cout<<endl<<"3. EXIT";
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
					objLL1.AddToNextNode(number);
					cout<<endl<<"Number inserted and added in list "<<endl;
				}
				break;

			case 2:
				{
					cout<<endl<<"List contents are"<<endl;
					objLL1.Display();
				}
				break;

			case 3:
				cout<<endl<<"EXITING"<<endl;
				break;

			default:cout<<endl<<"Please enter a valid choice";
		}
	}while(choice!=3);
	return 0;
}
