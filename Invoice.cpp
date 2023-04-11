#include <iostream>
#include "PostOffice.h"
#include "Order.h"
#include "MailService.h"
#include "Invoice.h"

	Invoice::Invoice()
	{
		weight = 0;
		dim = 0;
		orderID = 0;
	}
	
	Invoice::Invoice(int w, int d, int ID)
	{
		weight = w;
		dim = d;
		orderID = ID;
	}
	
	void Invoice::setweight(int w)
	{
		weight = w;
	}	
	
	void Invoice::setdim(int d)
	{
		dim = d;
	}	
	
	void Invoice::setorderID(int ID)
	{
		orderID = ID;
	}
	
	int Invoice::getweight()
	{
		return weight;
	}
	
	int Invoice::getdim()
	{
		return dim;
	}
	
	int Invoice::getorderID()
	{
		return orderID;
	}
	
	Invoice::ShowInvoice()
	{
		cout<<endl;
		cout<<"------------------Your Invoice---------------"<<endl<<endl;
		cout<<"Order ID: "<<orderID<<endl;
		cout<<"Weight of the Order: "<<weight<<endl;
		cout<<"Dimensions of the Order : "<<dim<<endl;
	}
