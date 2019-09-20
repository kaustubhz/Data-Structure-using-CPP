#include"LinkedList.h"
int main()
{
	int choice;
	Student s;
	int number;
	cout<<"\nHow many streams: ";
	cin>>number;
	LinkedList<Student> ll[number];

/*	for(int i=0;i<number;i++)
	{
		cout<<"\nEnter a stream";
		cin>>ll[i];
	}*/

	do
	{
		cout<<"\n******MENU******"<<endl;
		cout<<"1.AddAtBegin"<<endl;
		cout<<"2.DeleteAtBegin"<<endl;
		cout<<"3.AddAtEnd"<<endl;
		cout<<"4.DeleteAtEnd"<<endl;
		cout<<"5.Size of linked list"<<endl;
		cout<<"6.Display"<<endl;
		cout<<"7.EXIT"<<endl;
		cout<<"\nEnter your choice: ";
		cin>>choice;
		cin.get();
		switch(choice)
		{
			case 1:{
				       cout<<"\nEntering details for students"<<endl;
				       cin>>s;
				       cout<<s;
				       ll[0].AddAtBegin(s);
				       cout<<endl<<"Student record inserted at beginning";
			       }
			       break;

			case 2:{	ll[0].DeleteAtBegin();
				       cout<<endl<<" deleted from beginning"<<endl;
			       }
			       break;
			case 3:{
				       cout<<"\nEntering details for students"<<endl;
				       cin>>s;
				       cout<<s;
				       ll[0].AddAtBegin(s);
				       cout<<endl<<"Student record inserted at end";
			       }
			       break;
			case 4:{
				       ll[0].DeleteAtEnd();
				       cout<<endl<<" deleted from end"<<endl;
			       }
			       break;
			case 5:{
					cout<<"\nSize of Linked list: "<<ll[0].Size();
			       }
			       break;
			case 6:{
				cout<<"\nElements in Linked List"<<endl;
				ll[0].DisplayAll();
			       }
			       break;
			case 7:{
			       	cout<<"\nEXIT";
			       }
			default: cout<<"\nPlease enter valid choice";			       			    
			       break;
		}

	}while(choice!=7);
	return 0;
}
