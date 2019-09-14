#include"DeQueueLL.h"

int main()
{
	int choice;
	DeQueueLL<int> deq;
	do
	{
		cout<<"\n*****Dequeue using Linked List*****"<<endl;
		cout<<"1. Add at Front"<<endl;
		cout<<"2. Add At Rear"<<endl;
		cout<<"3. Delete At Front"<<endl;
		cout<<"4. Delete At Rear"<<endl;
		cout<<"5. Display Queue"<<endl;
		cout<<"6. EXIT"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		cin.get();

		switch(choice)
		{
			case 1:
				{
					int num;
					cout<<"\nEnter a number: ";
					cin>>num;
					deq.AddAtFront(num);		
					cout<<endl<<num<<" inserted at front"<<endl;	
				}
				break;
			case 2:
				{
					int num;
					cout<<"\nEnter a number: ";
					cin>>num;
					deq.AddAtRear(num);	
					cout<<endl<<num<<" inserted at rear"<<endl;	
				}
				break;
			case 3:
				{
					try
					{
					cout<<"Deleted at Front: "<<deq.DeleteAtFront()<<endl;		
					}
					catch(runtime_error re)
					{
						cout<<re.what();
					}
				}
				break;
			case 4:
				{
					try
					{
					cout<<"Deleted at Rear: "<<deq.DeleteAtRear()<<endl;		
					}
					catch(runtime_error re)
					{
						cout<<re.what();
					}
				}
				break;
			case 5:
				{
					cout<<"\nDouble ended Queue elements are: ";
					deq.DisplayQueue();
				}
				break;

		}

	}while(choice!=6);
	return 0;
}
