#include"C2Stack.h"

template <class T>
C2Stack<T>::C2Stack(int s):size(s),top1(0),top2(size),arr(new T[size])
{
	cout<<"\nPARM CTOR"<<endl;
}

template <class T>
bool C2Stack<T>::IsEmpty1()
{
	return (top1==0);
}

template <class T>
bool C2Stack<T>::IsEmpty2()
{
	return (top2==size);
}

template <class T>
bool C2Stack<T>::IsFull()
{
	return (top1==top2);
}

template <class T>
T C2Stack<T>::Peep1()
{
	if(IsEmpty1())
	{
		throw runtime_error("\nStack Underflow");
	}
	return arr[top1];
}

template <class T>
T C2Stack<T>::Peep2()
{
	if(IsEmpty2())
	{
		throw runtime_error("\nStack Underflow");
	}
	return arr[top2];
}

template <class T>
T C2Stack<T>::Pop1()
{
	if(IsEmpty1())
	{
		throw runtime_error("\nStack Underflow");
	}
	return arr[top1--];
}

template <class T>
T C2Stack<T>::Pop2()
{
	if(IsEmpty2())
	{
		throw runtime_error("\nStack Underflow");
	}
	return arr[top2++];
}

template <class T>
void C2Stack<T>::Push1(T ele)
{
	if(IsFull())
	{
		throw runtime_error("\nStack Overflow");
	}
	top1++;
	arr[top1]=ele;
}

template <class T>
void C2Stack<T>::Push2(T ele)
{
	if(IsFull())
	{
		throw runtime_error("\nStack Overflow");
	}
	cout<<"\nInside Push1";
	arr[top2]=ele;
	top2--;
}

template <class T>
C2Stack<T>::~C2Stack()
{
	delete []arr;
	cout<<"\nDTOR"<<endl;
}

//Explicit Instantiation
template class C2Stack<int>;

