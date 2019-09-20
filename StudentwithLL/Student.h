#include<iostream>
using namespace std;
class Student
{
	private:
		string name;
		string PRN;
	
	public:
		Student();
		Student(string,string);
		friend istream& operator >>(istream&,Student&);
		friend ostream& operator <<(ostream&,const Student&);

		
		~Student();
};
