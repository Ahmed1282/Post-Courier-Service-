#include <iostream>
using namespace std;

#ifndef Invoice_h
#define Invoice_h

class Invoice : public PostOffice, public Order,  public MailService
{
	protected:
		int weight;
		int dim;
		int orderID;
		
	public:
		Invoice();
		Invoice(int w, int d, int ID);
		void setweight(int w);
		void setdim(int d);
		void setorderID(int ID);
		int getweight();
		int getdim();
		int getorderID();
		ShowInvoice();
	
};
#endif
