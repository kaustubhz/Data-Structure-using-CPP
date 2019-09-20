#include "LinkedList.h"
int main()
{
	int choice;
	Student s;
	int number;
	cout << "\nHow many streams: ";
	cin >> number;
	LinkedList<Student> ll[number];

	for (int i = 0; i < number; i++)
	{		
		ll[i].AcceptCourse();
	}
	for (int i = 0; i < number; i++)
	{
		cout << endl
			 << "Accepting student\'s data for ";
		ll[i].DisplayCourse();
		cout << " stream" << endl;
		do
		{
			cout << "\n******MENU******" << endl;
			cout << "1.AddAtBegin" << endl;
			cout << "2.DeleteAtBegin" << endl;
			cout << "3.AddAtEnd" << endl;
			cout << "4.DeleteAtEnd" << endl;
			cout << "5.Size of linked list" << endl;
			cout << "6.Display" << endl;
			cout << "7.EXIT" << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			cin.get();
			switch (choice)
			{
			case 1:
			{
				cout << "\nEntering details for students" << endl;
				cin >> s;
				cout << s;
				ll[i].AddAtBegin(s);
				cout << endl
					 << "Student record inserted at beginning";
			}
			break;

			case 2:
			{
				ll[i].DeleteAtBegin();
				cout << endl
					 << " deleted from beginning" << endl;
			}
			break;
			case 3:
			{
				cout << "\nEntering details for students" << endl;
				cin >> s;
				cout << s;
				ll[i].AddAtBegin(s);
				cout << endl
					 << "Student record inserted at end";
			}
			break;
			case 4:
			{
				ll[i].DeleteAtEnd();
				cout << endl
					 << " deleted from end" << endl;
			}
			break;
			case 5:
			{
				cout << "\nSize of Linked list: " << ll[i].Size();
			}
			break;
			case 6:
			{
				cout << "\nElements in Linked List" << endl;
				ll[i].DisplayAll();
			}
			break;
			case 7:
			{
				cout << "\nEXIT";
			}
			break;
			default:
				cout << "\nPlease enter valid choice";
				break;
			}

		} while (choice != 7);
	}
	cout << endl
		 << "Displaying student\'s details along with streams" << endl;
	for (int i = 0; i < number; i++)
	{
		cout << endl
			 << "Stream: ";
		ll[i].DisplayCourse();
		cout << endl;
		cout << endl
			 << "Student\'s details" << endl;
		ll[i].DisplayAll();
	}
	return 0;
}
