#include "LinkedList.h"

int main()
{
	int choice;
	LinkedList<RetailShopOwner> objLinkedList;
	do
	{
		cout << endl
			 << "1. Create a shop info";
		cout << endl
			 << "2. Remove a shop info";
		cout << endl
			 << "3. Display List";
		cout << endl
			 << "4. Display List addresswise";
		cout << endl
			 << "5. Display List of shops citywise";
		cout << endl
			 << "6. EXIT";
		cout << endl
			 << "Enter your choice: ";
		cin >> choice;
		cin.get();

		switch (choice)
		{
		case 1:
		{
			RetailShopOwner r1;
			//r1.Accept();
			cin >> r1;
			objLinkedList.AddAtRear(r1);
		}
		break;
		case 2:
		{
		}
		break;
		case 3:
		{
			objLinkedList.DisplayAllNodes();
		}
		break;
		case 4:
		{
			objLinkedList.SortAllAddresses();
			//LinkedList<RetailShopOwner>::SearchAddresswise(objLinkedList.GetHeadNode());
		}
		break;

		case 6:
		{
			cout << endl
				 << "EXITING" << endl;
		}
		}
	} while (choice != 6);
	return 0;
}
