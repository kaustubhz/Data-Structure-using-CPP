#ifndef DEQUEUELL_H
#define DEQUEUELL_H
#include"LinkedList.h"

template<class T>
class DeQueueLL
{
	private:
		LinkedList<T> ll;

	public:
		bool IsEmpty();
		bool IsFull();

		void AddAtFront(T);
		void AddAtRear(T);

		T DeleteAtFront();
		T DeleteAtRear();	

		void DisplayQueue();
};

#endif
/*template class DeQueueLL <int>;
template class DeQueueLL <char>;
template class DeQueueLL <double>;*/
