#include<iostream>
#include<stdexcept>
using namespace std;

template <class T>
class C2Stack
{
	private:
		int top1;
		int top2;
		int size;
		T *arr;
	public:
		C2Stack(int);
		bool IsEmpty1();
		bool IsEmpty2();
		bool IsFull();
		T Peep1();
		T Peep2();
		T Pop1();
		T Pop2();
		void Push1(T);
		void Push2(T);
		~C2Stack();
};
