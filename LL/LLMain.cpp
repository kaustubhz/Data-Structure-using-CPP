#include"LinkedList.h"
//#include"Node.h"

int main()
{
	LinkedList<int> ll;
//	ll.AddAtBegin(11);
//	ll.AddAtBegin(22);
//	ll.AddAtBegin(33);
//	ll.AddAtBegin(44);
//	ll.DisplayAll();
//	ll.DeleteAtBegin();
//	ll.DisplayAll();
	ll.AddAtEnd(11);
	ll.AddAtEnd(22);
	ll.AddAtEnd(33);
	ll.AddAtEnd(44);
	ll.DisplayAll();
	ll.DeleteAtEnd();
	ll.DisplayAll();
	ll.InsertAt(3,88);
	ll.DisplayAll();

	return 0;
}
