#include"C2Stack.h"

int main()
{
	int choice,number,s,number1;
	cout<<"\nEnter size of stack: ";
	cin>>s;
	C2Stack<int> m(s);
	char ch;
	do
	{
		cout<<"\nMenu:";
		cout<<"\n1.Push1";
		cout<<"\n2.Push2";
		cout<<"\n3.Pop1";
		cout<<"\n4.Pop2";
		cout<<"\n5.Peep1";
		cout<<"\n6.Peep2";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:{
				       cout<<"\nEnter number you want to push: ";
				       cin>>number;
				       try{
					       m.Push1(number);
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;

			case 2:{
				       cout<<"\nEnter number you want to push: ";
				       cin>>number1;
				       try{
					       m.Push2(number1);
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;
			case 3:{
				       try{
					       cout<<"\nPopped Element is: "<<m.Pop1();
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;

			case 4:{
				       try{
					       cout<<"\nPopped Element is: "<<m.Pop2();
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;
			case 5:{
				       try{
					       cout<<"\nPeeped Element is: "<<m.Peep1();
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
			       }
			       break;

			case 6:{
				       try{
					       cout<<"\nPeeped Element is: "<<m.Peep2();
				       }
				       catch(runtime_error e)
				       {
					       cout<<"\n"<<e.what();
				       }
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
