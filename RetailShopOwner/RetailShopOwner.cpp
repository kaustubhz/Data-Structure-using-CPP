#include"RetailShopOwner.h"

RetailShopOwner::RetailShopOwner():id("100"),name("abc"),address("xyz"),product("ghi")
{
cout<<endl<<"Default address accepted"<<endl;
}

istream& operator >>(istream& in,RetailShopOwner& r1)
{
	cout<<endl<<"Enter ID: ";
	in>>r1.id;
	cout<<endl<<"Enter Name: ";
        in>>r1.name;
	cout<<endl<<"Enter Address: ";
        in>>r1.address;
	cout<<endl<<"Enter Product: ";
        in>>r1.product;
	return in;
}

string RetailShopOwner::GetAddress()
{
	return address;
}

ostream& operator <<(ostream& out,const RetailShopOwner& r1)
{
	out<<endl<<"Details"<<endl;
	out<<"ID "<<r1.id<<endl;
	out<<"Name "<<r1.name<<endl;
	out<<"Address "<<r1.address<<endl;
	out<<"Product "<<r1.product<<endl;
	return out;
}
RetailShopOwner::~RetailShopOwner()
{
	
}
