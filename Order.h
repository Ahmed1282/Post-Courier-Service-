#include <iostream>
using namespace std;

#ifndef Order_h
#define Order_h

class Order
{
	protected:
		int weight;
		int dim;
		int orderID;
		Address Ad;
		
	public:
		Order();
		Order(int w, int d, int ID, Address a);
		void setweight(int w);
		void setdim(int d);
		void setorderID(int ID);
		void setAddress(Address a);
		int getweight();
		int getdim();
		int getorderID();
		Address getAddress();
		void PrintOrder();
	
};
#endif
