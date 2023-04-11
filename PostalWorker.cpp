#include <iostream>
#include "PostalWorker.h"

	PostalWorker::PostalWorker()
	{	
		fname = "";
		sname = "";
		pnum = "";
		email = "";
	}
	
	PostalWorker::PostalWorker(string f_name, string s_name, string p_num, string Email)
	{
		fname = f_name;
		sname = s_name;
		pnum = p_num;
		email = Email;
	}
	
	void PostalWorker::setfirstname(string f_name)
	{
		fname = f_name;
	}
	
	void PostalWorker::setsecondname(string s_name)
	{
		sname = s_name;
	}
	
	void PostalWorker::setphonenum(string p_num)
	{
		pnum = p_num;
	}
	
	void PostalWorker::setemail(string Email)
	{
		email = Email;
	}
	
	string PostalWorker::getfirstname()
	{
		return fname;
	}
	
	string PostalWorker::getsecondname()
	{
		return sname;
	}
	
	string PostalWorker::getphonenum()
	{
		return pnum;
	}
	
	string PostalWorker::getemail()
	{
		return email;
	}
	
	void PostalWorker::DisplayEmployee()
	{
		cout<<endl<<endl;
		cout<<"----------PostalWorker Details----------"<<endl<<endl;
		cout<<"Name: "<<fname<<" "<<sname<<endl;
		cout<<"Phone Number: "<<pnum<<endl;
		cout<<"Email: "<<email<<endl;
	}
