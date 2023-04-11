#include <iostream>
#include "Customer.h"
#include "Address.h"
#include "Order.h"
using namespace std;
	Order::Order()
	{
		weight = 0;
		dim = 0;
		orderID = 0;
		Ad = Address();
	}
	
	Order::Order(int w, int d, int ID, Address a)
	{
		weight = w;
		dim = d;
		orderID = ID;
		Ad = a;
	}
	
	void Order::setweight(int w)
	{
		weight = w;
	}	
	
	void Order::setdim(int d)
	{
		dim = d;
	}	
	
	void Order::setorderID(int ID)
	{
		orderID = ID;
	}
	
	void Order::setAddress(Address a)
	{
		Ad = a;
	}
	
	int Order::getweight()
	{
		return weight;
	}
	
	int Order::getdim()
	{
		return dim;
	}
	
	int Order::getorderID()
	{
		return orderID;
	}
		
	Address Order::getAddress()
	{
		return Ad;
	}
	
	void Order::PrintOrder()
	{
		Ad.PrintAddress();
		cout<<"-----Order Details------"<<endl<<endl;
		cout<<"Order ID: "<<orderID<<endl;
		cout<<"Weight of the Order: "<<weight<<endl;
		cout<<"Dimensions of the Order : "<<dim<<endl<<endl;
		
	}
	
