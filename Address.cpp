#include <iostream>
#include "Customer.h"
#include "Address.h"
using namespace std;

	Address::Address()
	{
		hnum = ""; 
		str = 0;
		sec = "";
		city = "";
		rhnum = ""; 
		rstr = 0;
		rsec = "";
		rcity = "";
	}
	
	Address::Address(string h_num, int Str, string Sec, string City, string rh_num, int rStr, string rSec, string rCity)
	{
		hnum = h_num; 
		str = Str;
		sec = Sec;
		city = City;
		rhnum = rh_num; 
		rstr = rStr;
		rsec = rSec;
		rcity = rCity;
	}
	
	void Address::setcustomer(Customer C)
	{
		Cu = C;
	}
	
	void Address::sethousenum(string h_num)
	{
		hnum = h_num;
	}
	
	void Address::setstreetnum(int Str)
	{
		str = Str;
	}

	void Address::setsector(string Sec)
	{
		sec = Sec;
	}
	
	void Address::setcity(string City)
	{
		city = City;
	}
	
	void Address::setrhousenum(string rh_num)
	{
		rhnum = rh_num;
	}
	
	void Address::setrstreetnum(int rStr)
	{
		rstr = rStr;
	}

	void Address::setrsector(string rSec)
	{
		sec = rSec;
	}
	
	void Address::setrcity(string rCity)
	{
		rcity = rCity;
	}
	
	Customer Address::getcustomer()
	{
		return Cu;
	}
	
	string Address::gethousenum()
	{
		return hnum;
	}
	
	int Address::getstreetnum()
	{
		return str;
	}
	
	string Address::getsector()
	{
		return sec;
	}
	
	string Address::getcity()
	{
		return city;	
	}
	
	string Address::getrhousenum()
	{
		return rhnum;
	}
	
	int Address::getrstreetnum()
	{
		return rstr;
	}
	
	string Address::getrsector()
	{
		return rsec;
	}
	
	string Address::getrcity()
	{
		return rcity;	
	}
	
	void Address::PrintAddress()
	{
		Cu.PrintCustomer();
		cout<<"-----Customer Address Details------"<<endl<<endl;
		cout<<"House Number: "<<hnum<<endl;
		cout<<"Street Number: "<<str<<endl;
		cout<<"Sector/Phase/Society: "<<sec<<endl;
		cout<<"City: "<<city<<endl<<endl;
		cout<<"-----Reciever Address Details------"<<endl<<endl;
		cout<<"House Number: "<<rhnum<<endl;
		cout<<"Street Number: "<<rstr<<endl;
		cout<<"Sector/Phase/Society: "<<rsec<<endl;
		cout<<"City: "<<rcity<<endl<<endl;
	}
