#include <iostream>
#include "MailService.h"
#include "UrgentMail.h"
using namespace std;

	UrgentMail::UrgentMail() : MailService()
	{
		
	}
	
	void UrgentMail::DisplayUBill()
	{
		int B;
		int d;
		int w;
		d = MailService::getdis();
		w = MailService::getweight();
		if(d == 1)
		{
			cout<<"Mail is Local"<<endl;
			if(w> 0 && w<= 250)
			{
				B=51;
				cout<<"Your Bill is Rs: "<<B<<endl;
			}
			else if(w> 250 && w<= 500)
			{
				B=64;
				cout<<"Your Bill is Rs: "<<B<<endl;
			}
			else if( w > 500)
			{
				double B2 = 0;
				double m; 
				m=w/500;
				B2 = m*26;
				cout<<"Your Bill is Rs: "<<B2<<endl;
			}
		}
		else if(d == 2)
		{
			cout<<"Mail is City to City"<<endl;
			if(w> 0 && w<= 250)
			{
				B=86;
				cout<<"Your Bill is Rs: "<<B<<endl;
			}
			else if(w> 250 && w<= 500)
			{
				B=132;
				cout<<"Your Bill is Rs: "<<B<<endl;
			}
			else if( w > 500)
			{
				double B2 = 0;
				double m; 
				m=w/500;
				B2 = m*43;
				cout<<"Your Bill is Rs: "<<B2<<endl;
			}
		}	
	}
