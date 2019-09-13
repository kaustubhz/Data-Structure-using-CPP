#include"QueueInLL.cpp"

int main()
{
	int choice,number;
	MyQueue<int> m;
	do
	{
		cout<<"\nMenu:";
		cout<<"\n1.Add";
		cout<<"\n2.Delete";
		cout<<"\n3.Display";
		cout<<"\n4.EXIT";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:{
				       cout<<"\nEnter number you want to add: ";
				       cin>>number;
				       try{
					       m.AddQueue(number);
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;
			case 2:{
				       try{
					       cout<<"\nDeleted Element is: "<<m.DelQueue();
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;
			case 3:{
				       cout<<"\nQueue elements are"<<endl;
				       m.DisplayQueue();

			       }
			       break;
			case 4: cout<<"\nExiting";
				break;
			default:{
					cout<<"\nPlease enter valid choice"<<endl;
				}
				break;
		}
	}
	while(choice!=4);

	return 0;
}
