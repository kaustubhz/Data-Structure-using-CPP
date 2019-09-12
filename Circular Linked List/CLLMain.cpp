#include"LinkedList.h"
//#include"Node.cpp"

int main()
{
	int choice;
	LinkedList<int> ll;
	do
	{
		cout<<"\n******MENU******"<<endl;
		cout<<"1.AddAtBegin"<<endl;
		cout<<"2.DeleteAtBegin"<<endl;
		cout<<"3.AddAtEnd"<<endl;
		cout<<"4.DeleteAtEnd"<<endl;
		cout<<"5.InsertAt"<<endl;
		cout<<"6.Reverse"<<endl;
		cout<<"7.Size of linked list"<<endl;
		cout<<"8.Display"<<endl;
		cout<<"9.EXIT"<<endl;
		cout<<"\nEnter your choice: ";
		cin>>choice;
		cin.get();
		switch(choice)
		{
			case 1:{
				       int number;
				       cout<<"\nInsert number: ";
				       cin>>number;
				       ll.AddAtBegin(number);
				       cout<<endl<<number<<" inserted at beginning";
			       }
			       break;

			case 2:{
				       cout<<endl<<ll.DeleteAtBegin()<<" deleted from beginning"<<endl;
			       }
			       break;
			case 3:{
				       int number;
				       cout<<"\nInsert number: ";
				       cin>>number;
				       ll.AddAtEnd(number);
				       cout<<endl<<number<<" inserted at end";
			       }
			       break;
			case 4:{
				       cout<<endl<<ll.DeleteAtEnd()<<" deleted from end"<<endl;
			       }
			       break;
			case 5:{
					int pos,number;
					cout<<"\nEnter position: ";
					cin>>pos;
					cout<<"\nEnter number: ";
					cin>>number;
					ll.InsertAt(pos,number);
					cout<<endl<<number<<" inserted at position "<<pos;
			       }
			       break;
			case 6:{
				ll.Reverse();
				cout<<"\nLinked list reversed";
			       }
			       break;
			case 7:{
					cout<<"\nSize of Linked list: "<<ll.Size();
			       }
			       break;
			case 8:{
				cout<<"\nElements in Linked List"<<endl;
				ll.DisplayAll();
			       }
			       break;
			case 9:{
			       	cout<<"\nEXIT";
				exit(0);
			       }
			default: cout<<"\nPlease enter valid choice";			       			    
			       break;
		}

	}while(choice!=9);
	return 0;
}
