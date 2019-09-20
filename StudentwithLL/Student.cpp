#include"Student.h"

Student::Student()
{
//	name="abc";
//	PRN="100";
}

Student::Student(string n,string p):name(n),PRN(p)
{
}

istream& operator>>(istream& in,Student &s)
{
	cout<<"\nEnter name: ";
	in>>s.name;
	cout<<"\nEnter PRN: ";
	in>>s.PRN;
	return in;
}

ostream&  operator<<(ostream& out,const Student &s)
{
	out<<endl<<"Name: "<<s.name;
	out<<endl<<"PRN: "<<s.PRN<<endl;
	return out;
}

Student::~Student()
{
	std::cout<<"\nStudent removed";
}


