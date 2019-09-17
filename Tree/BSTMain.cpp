#include"BST.h"

int main()
{
	int choice;
	BST<int> objBST;
	cout<<"Root initialized to "<<objBST.GetRoot()<<endl;

	do
	{
		cout<<"\n******MENU******"<<endl;
		cout<<"1. Insert"<<endl;
		cout<<"2. Inorder"<<endl;
		cout<<"3. Preorder"<<endl;
		cout<<"4. Postorder"<<endl;
		cout<<"5. Delete"<<endl;
		cout<<"6. Count"<<endl;
		cout<<"7. Find minimum"<<endl;
		cout<<"8. Find maximum"<<endl;
		cout<<"9. Search in Tree"<<endl;
		cout<<"10. EXIT"<<endl;
		cout<<"Enter choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:{
				       int number;
				       cout<<"\nEnter a number: ";
				       cin>>number;
				       cin.get();
				       cout<<(objBST.Insert(number)==true?"\nNode inserted":"\nNode not inserted")<<endl;
			       }
			       break;

			case 2:{
				       cout<<endl<<"BST in Inorder are "<<endl;
				       BST<int>::InOrder(objBST.GetRoot());
			       }
			       break;

			case 3:{
				       cout<<endl<<"BST in Preorder are "<<endl;
				       BST<int>::PreOrder(objBST.GetRoot());
			       }
			       break;
			case 4:{
				       cout<<endl<<"BST in Postorder are "<<endl;
				       BST<int>::PostOrder(objBST.GetRoot());
			       }
			       break;
			case 5:{
				  //     cout<<endl<<"BST in Inorder are "<<endl;
				    //   BST<int>::InOrder(objBST.GetRoot());
				       BST<int>::Delete(objBST.GetRoot());
			       }
			       break;
			case 6:{
				       cout<<"Count is: "<<objBST.GetCount()<<endl;
			       }
			       break;
			case 7:{
				       BST<int>::FindMinimum(objBST.GetRoot());
			       }
			       break;
			case 8:{
				       BST<int>::FindMaximum(objBST.GetRoot());
			       }
			       break;
			case 9:{
				       int number;
				       cout<<"\nEnter a number: ";
				       cin>>number;
				       cin.get();
				       cout<<(objBST.SearchInTree(number)==true?"\nNumber found":"\nNumber not found")<<endl;
			       }
			       break;
			case 10:{
				       cout<<"EXITING"<<endl;
			       }
			       break;

			default:{
					cout<<"\nInvalid Choice"<<endl;
				}
		}
	}while(choice!=10);
	return 0;
}
