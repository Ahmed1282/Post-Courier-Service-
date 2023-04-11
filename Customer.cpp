#include <iostream>
#include "Customer.h"
using namespace std;

	Customer::Customer()
	{	
		fname = "";
		sname = "";
		age = 0;
		pnum = "";
		email = "";
		rfname = "";
		rsname = "";
		rpnum = "";
	}
	
	Customer::Customer(string f_name, string s_name, int Age, string p_num, string Email, string rf_name, string rs_name, string rp_num)
	{
		fname = f_name;
		sname = s_name;
		age = Age;
		pnum = p_num;
		email = Email;
		rfname = rf_name;
		rsname = rs_name;
		rpnum = rp_num;	
	}
	
	void Customer::setfirstname(string f_name)
	{
		fname = f_name;
	}
	
	void Customer::setsecondname(string s_name)
	{
		sname = s_name;
	}
	
	void Customer::setrfirstname(string rf_name)
	{
		rfname = rf_name;
	}
	
	void Customer::setrsecondname(string rs_name)
	{
		rsname = rs_name;
	}
	
	void Customer::setage(int Age)
	{
		age = Age;
	}
	
	void Customer::setphonenum(string p_num)
	{
		pnum = p_num;
	}
	
	void Customer::setrphonenum(string rp_num)
	{
		rpnum = rp_num;
	}
	
	void Customer::setemail(string Email)
	{
		email = Email;
	}
	
	string Customer::getfirstname()
	{
		return fname;
	}
	
	string Customer::getsecondname()
	{
		return sname;
	}
	
	string Customer::getrfirstname()
	{
		return rfname;
	}
	
	string Customer::getrsecondname()
	{
		return rsname;
	}
	
	int Customer::getage()
	{
		return age;
	}
		
	string Customer::getphonenum()
	{
		return pnum;
	}
	
	string Customer::getrphonenum()
	{
		return pnum;
	}
	
	string Customer::getuemail()
	{
		return email;
	}
	
	void Customer::PrintCustomer()
	{
		cout<<endl<<endl;
		cout<<"----------Customer Details----------"<<endl<<endl;
		cout<<"Name: "<<fname<<" "<<sname<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Phone Number: "<<pnum<<endl;
		cout<<"Email: "<<email<<endl<<endl;
		cout<<"----------Reciever Details----------"<<endl<<endl;
		cout<<"Name: "<<rfname<<" "<<rsname<<endl;
		cout<<"Phone Number: "<<rpnum<<endl<<endl;
	}
