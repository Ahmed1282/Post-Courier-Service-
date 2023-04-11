//Muhammad Ahmed Baig_20i-1884_Section F and Section B (lAB)_Project
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

#include "Customer.cpp"
#include "Address.cpp"
#include "Order.cpp"
#include "Mail.cpp"
#include "MailService.cpp"
#include "RegularMail.cpp"
#include "UrgentMail.cpp"
#include "SortingSection.cpp"

#include "PostalWorker.cpp"
#include "Clerk.cpp"
#include "Postman.cpp"
#include "AccountOfficer.cpp"

#include "PostOffice.cpp"
#include "Invoice.cpp"
//#include "GPO.cpp"
using namespace std;

int main()
{
	//variables used
	//PostOffice Class
	int post;
	int postal;
	int reg;
	cout<<"----------Post Office----------"<<endl<<endl;
	cout<<"Please enter the post office you are in: "<<endl;
	cout<<"1.Islamabad (92)"<<endl;
	cout<<"2.Lahore (93)"<<endl;
	cout<<"3.Karachi (94)"<<endl;
	cout<<"4.Peshawar (95)"<<endl;
	cout<<"5.Quetta (96)"<<endl;
	cin>>post;
	PostOffice Post(post);
	cout<<endl;
	//Register Menu
	cout<<"Enter whom you want to register"<<endl;
	cout<<"1.Employee"<<endl;
	cout<<"2.Customer"<<endl;
	cin>>reg;
	
	if(reg == 1)
	{ 
		string efname, esname, Eemail;
		string epnum;
		int position;
		cout<<"----------Employee Registration----------"<<endl<<endl;
		cout<<"Please enter your First Name: ";
		cin>>efname;
		cout<<"Please enter your Second Name: ";
		cin>>esname;
		cout<<"Please enter your Phone Number: ";
		cin>>epnum;
		cout<<"Please enter your Email Address: ";
		cin>>Eemail;	
		cout<<endl;
		cout<<"Please let us know your position: "<<endl;
		cout<<"1.Clerk"<<endl;
		cout<<"2.Postman"<<endl;
		cout<<"3.Account Officer"<<endl;
		cin>>position;
		PostalWorker Worker(efname,esname,epnum,Eemail);
		Worker.DisplayEmployee();
		if(position == 1)
		{
			Clerk clerk;
			clerk.showClerk();
		}
		else if(position == 2)
		{
			Postman postman;
			postman.ShowPostman();
		}
		else if(position == 3)
		{
			 AccountOfficer ac;
			 ac.showAccountOfficer();
		}
	}
	
	else if (reg == 2)
	{
	//Customer Class 
	string fname, sname, email;
	string pnum;
	int age;
	string rfname, rsname, rpnum;
	
	//Address Class
	string hnum, sec, city;
	int str;
	string rhnum, rsec, rcity;
	int rstr;
	
	//Order Class
	int weight, dim, orderID;
	orderID = rand() % 89999 + 10000;
	
	//Mail Class
	int type, dis;
	
	//Mail sorting class
	int check;
	
	//-----------------------------------------------------------------------------------------//
	
	//Customer Registration
	cout<<"----------Customer Registration----------"<<endl<<endl;
	cout<<"Please enter your First Name: ";
	cin>>fname;
	cout<<"Please enter your Second Name: ";
	cin>>sname;
	cout<<"Please enter your age: ";
	cin>>age;
	cout<<"Please enter your Phone Number: ";
	cin>>pnum;
	cout<<"Please enter your Email Address: ";
	cin>>email;
	
	
	//Customer Address
	cout<<endl;
	cout<<"----------Customer Address----------"<<endl<<endl;
	cout<<"Please enter your House Number: ";
	cin>>hnum;
	cout<<"Please enter your Street Number: ";
	cin>>str;
	cout<<"Please enter your Sector/Phase/Society: ";
	cin>>sec;
	cout<<"Please enter your City: ";
	cin>>city;
	
	
	//Order Information
	cout<<endl;
	cout<<"----------Order Information----------"<<endl<<endl;
	cout<<"Please enter order weight: ";
	cin>>weight;
	cout<<"Please entet order dimensions: ";
	cin>>dim;
	
	//Mail Information
	cout<<endl;
	cout<<"----------Mail Information----------"<<endl<<endl;
	cout<<"Please enter the type of mail"<<endl;
	cout<<"press 1.Regular Mail"<<endl;
	cout<<"press 2.Urgent Mail"<<endl;
	cin>>type;
	cout<<endl;
	cout<<"please enter whether mail is local or city to city"<<endl;
	cout<<"press 1 for local Mails"<<endl;
	cout<<"press 2 for city to city mail"<<endl;
	cin>>dis;

	//Recievers Address
	cout<<endl;
	cout<<"----------Recievers Address and Information----------"<<endl<<endl;
	cout<<"Please enter Recievers First Name: ";
	cin>>rfname;
	cout<<"Please enter Recievers Second Name: ";
	cin>>rsname;
	cout<<"Please enter Recievers Phone Number: ";
	cin>>rpnum;
	cout<<"Please enter Recievers House Number: ";
	cin>>rhnum;
	cout<<"Please enter Recievers Street Number: ";
	cin>>rstr;
	cout<<"Please enter Recievers Sector/Phase/Society: ";
	cin>>rsec;
	cout<<"Please enter Recievers City: ";
	cin>>rcity;
	
	//-----------------------------------------------------------------------------------------//
	
	//Object Customer
	Customer Cu(fname,sname,age,pnum,email,rfname,rsname,rpnum);
	//Object Address
	Address Ad(hnum,str,sec,city,rhnum,rstr,rsec,rcity);
	//Association of customer in address
	Ad.setcustomer(Cu);
	//Object Order and Address being composition
	Order Or(weight,dim,orderID,Ad);
	Or.PrintOrder();
	//MailService Object created
	MailService MS(weight,type,dis);
	//Mail object created and Mail service is composition
	Mail M(MS);
	M.MailDisplay();
	//Inheritance used by Mail Service into Ruglar and Urgent Mail
	if(type == 1)
	{
		RegularMail R;
		R.setweight(weight);
		R.DisplayRBill();
	}
	else if(type == 2)
	{
		UrgentMail U;
		U.setweight(weight);
		U.setdis(dis);
		U.DisplayUBill();
	}
	cout<<endl;
	Invoice In(weight,dim,orderID);
	In.ShowInvoice();
	if(type == 1)
	{
		RegularMail R;
		R.setweight(weight);
		R.DisplayRBill();
	}
	else if(type == 2)
	{
		UrgentMail U;
		U.setweight(weight);
		U.setdis(dis);
		U.DisplayUBill();
	}
	Post.ShowPostOffice();
	cout<<endl;
	//Check Mail Recieved or Not
	cout<<"----------Mail Information----------"<<endl<<endl;
	cout<<endl;
	cout<<"Enter 1 if mail recievecd and enter 2 if mail is not recieved: "<<endl;
	cin>>check;
	SortingSection S(check);
	S.ShowStatus();
	}
	return 0;
}

