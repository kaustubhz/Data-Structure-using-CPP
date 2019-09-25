#ifndef RetailShopOwner_H
#define RetailShopOwner_H
#include<iostream>
#include<string>
using namespace std;

class RetailShopOwner
{
	private:
		string id;
		string name;
		string address;
		string product;

	public:
		RetailShopOwner();
	
		//static void ShowAddresswiseShop(string);
		string GetAddress();
		
		friend ostream& operator <<(ostream&,const RetailShopOwner&);
		friend istream& operator >>(istream&,RetailShopOwner&);
		
		void ShowAddresswiseShop(string);

		~RetailShopOwner();

};

#endif
