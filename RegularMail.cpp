#include <iostream>
#include "MailService.h"
#include "RegularMail.h"
using namespace std;

	RegularMail::RegularMail() : MailService()
	{
		
	}
	void RegularMail::DisplayRBill()
	{
		int B;
		int w;
		int R = 75;
		w = MailService::getweight();
		if(w > 0 && w<= 1000)
		{
			B=100 + R;
			cout<<"Your Bill is Rs: "<<B<<endl;
		}
		else if(w > 1000 && w<= 3000)
		{
			B=175 + R;
			cout<<"Your Bill is Rs: "<<B<<endl;
		}
		else if(w > 3000 && w<= 5000)
		{
			B=250 + R;
			cout<<"Your Bill is Rs: "<<B<<endl;
		}
		else if(w > 5000 && w<= 10000)
		{
			B=375 + R;
			cout<<"Your Bill is Rs: "<<B<<endl;
		}
		else if(w > 10000 && w<= 15000)
		{
			B=500 + R;
			cout<<"Your Bill is Rs: "<<B<<endl;
		}
		else if(w > 15000 && w<= 20000)
		{
			B=625 + R;
			cout<<"Your Bill is Rs: "<<B<<endl;
		}
		else if(w > 20000 && w<= 25000)
		{
			B=750 + R;
			cout<<"Your Bill is Rs: "<<B<<endl;
		}
		else if(w > 25000 && w<= 30000)
		{
			B=875 + R;
			cout<<"Your Bill is Rs: "<<B<<endl;
		}
		
	}
