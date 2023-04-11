#include <iostream>
using namespace std;

#ifndef Address_h
#define Address_h


class Address
{
	protected:
		string hnum; 
		int str;
		string sec;
		string city;
		string rhnum; 
		int rstr;
		string rsec;
		string rcity;
		Customer Cu;
	
	public:
		Address();
		Address(string h_num, int Str, string Sec, string City, string rh_num, int rStr, string rSec, string rCity);
		void setcustomer(Customer C);
		void sethousenum(string h_num);
		void setstreetnum(int Str);
		void setsector(string Sec);
		void setcity(string City);
		void setrhousenum(string rh_num);
		void setrstreetnum(int rStr);
		void setrsector(string rSec);
		void setrcity(string rCity);
		Customer getcustomer();
		string gethousenum();
		int getstreetnum();
		string getsector();
		string getcity();
		string getrhousenum();
		int getrstreetnum();
		string getrsector();
		string getrcity();
		void PrintAddress();
	
};


#endif
