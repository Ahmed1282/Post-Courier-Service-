#include <iostream>

#ifndef MailService_h
#define MailService_h

class MailService
{
	protected:
		int weight;
		int type;
		int dis;
	
	public:
		MailService();
		MailService(int w, int t, int d);
		void setweight(int w);
		int getweight();
		void settype(int t);
		int gettype();
		void setdis(int d);
		int getdis();
		void MailServiceDisplay();
		
};
#endif
