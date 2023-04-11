#include <iostream>
using namespace std;

#ifndef Customer_h
#define Customer_h

class Customer
{
	protected:
		string fname;
		string sname;
		string pnum; 
		int age;
		string email;
		string rfname;
		string rsname;
		string rpnum; 
	
	public:
		Customer();
		Customer(string f_name, string s_name, int Age, string p_num, string Email, string rf_name, string rs_name, string rp_num);
		void setfirstname(string f_name);
		void setsecondname(string s_name);
		void setrfirstname(string rf_name);
		void setrsecondname(string rs_name);
		void setage(int Age);
		void setphonenum(string p_num);
		void setrphonenum(string rp_num);
		void setemail(string Email);
		string getfirstname();
		string getsecondname();
		string getrfirstname();
		string getrsecondname();
		int getage();
		string getphonenum();
		string getrphonenum();
		string getuemail();
		void PrintCustomer();
};

#endif
