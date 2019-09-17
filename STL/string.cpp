#include<iostream>
#include<string>
using namespace std;
int main()
{
	string empty;
	string small="bitwise";
	string large="You\'re never wrong to do right thing";

	cout<<endl<<"Sizes: "<<endl;
	cout<<"Empty: "<<empty.size()<<endl;
	cout<<"Small: "<<small.size()<<endl;
	cout<<"Large: "<<large.size()<<endl;

	cout<<endl<<"Capacity:"<<endl;
	cout<<"Empty: "<<empty.capacity()<<endl;
	cout<<"Small: "<<small.capacity()<<endl;
	cout<<"Large: "<<large.capacity()<<endl;

	empty.reserve(50);
	
	cout<<"Empty capacity after empty.reserve(50): "<<empty.capacity()<<endl;

	return 0;
}
