#include"Stack.cpp"

int main()
{
	int choice,number;
	MyStack<int> m;
	char ch;
	do
	{
		cout<<"\nMenu:";
		cout<<"\n1.Push";
		cout<<"\n2.Pop";
		cout<<"\n3.Peep";
		cout<<"\n4.Display";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:{
				       cout<<"\nEnter number you want to push: ";
				       cin>>number;
				       try{
					       m.Push(number);
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;
			case 2:{
				       try{
					       cout<<"\nPopped Element is: "<<m.Pop();
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;
			case 3:{
				       try{
					       cout<<"\nPeeped Element is: "<<m.Peep();
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;
			case 4:{
					cout<<"\nStack elements are"<<endl;
					m.DisplayStack();

			       }
			       break;
			default:{
					cout<<"\nPlease enter valid choice"<<endl;
				}
				break;
		}
		cout<<"\nDo you want to continue? (y/n): ";
		cin>>ch;
		cin.get();		//Eater statement
	}
	while(ch!='n');

	return 0;
}
/*	MyStack<int> m(5);
	try{
	m.Push(11);
	m.Push(22);
	m.Push(33);
	m.Push(44);
	m.Push(55);
	m.Push(66);
	}
	catch(runtime_error e)
	{
	cout<<"\n"<<e.what();
	}
	try{
	cout<<"\npopped element is: "<<m.Pop();
	cout<<"\npopped element is: "<<m.Pop();
	cout<<"\npopped element is: "<<m.Pop();
	cout<<"\npopped element is: "<<m.Pop();
	cout<<"\npopped element is: "<<m.Pop();
	cout<<"\npopped element is: "<<m.Pop();
	}
	catch(runtime_error e)
	{
	cout<<"\n"<<e.what();
	}


	return 0;
	}*/
