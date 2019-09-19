#include"LinkedList.cpp"
#include"Node.cpp"

int main()
{
	int choice;
	LinkedList<int> ll;
	do
	{
		cout<<"\n******MENU******"<<endl;
		cout<<"1.Add Numbers in list "<<endl;
		cout<<"2.Add to next node"<<endl;
		cout<<"3.Sub to next node"<<endl;
		cout<<"4.Display"<<endl;
		cout<<"5.EXIT"<<endl;
		cout<<"\nEnter your choice: ";
		cin>>choice;
		cin.get();
		switch(choice)
		{
			case 1:{
				       for(int i=0;i<2;i++)
				       {
					       int number;
					       cout<<"\nInsert number: ";
					       cin>>number;
					       ll.AddAtEnd(number);
					       cout<<endl<<number<<" inserted in list";
				       }
			       }
			       break;

			case 2:{
				       int number;
				       cout<<endl<<"How many terms you would like to display? ";
				       cin>>number;
				       ll.AddNext(number);
			       }
			       break;
			case 3:{
				       int number;
				       cout<<endl<<"How many terms you would like to display? ";
				       cin>>number;
				       ll.SubNext(number);
			       }
			       break;
			case 4:{
				       cout<<"\nElements in Linked List"<<endl;
				       ll.DisplayAll();
			       }
			       break;
			case 5:{
				       cout<<"\nEXIT";
				       exit(0);
			       }
			default: cout<<"\nPlease enter valid choice";			       			    
				 break;
		}

	}while(choice!=5);
	return 0;
}
