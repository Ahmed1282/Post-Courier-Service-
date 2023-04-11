#include <iostream>
#include "PostOffice.h"

		PostOffice::PostOffice()
		{
			post = 0;
		}
		
		PostOffice::PostOffice(int p)
		{
			post = p;
		}
		
		void PostOffice::setPost(int p)
		{
			post = p;
		}
		int PostOffice::getpost()
		{
			return post;
		}
		void PostOffice::ShowPostOffice()
		{
			int postal;
			if(post == 1)
			{
				postal = 92;
				cout<<"PostOffice: Islamabad"<<endl;
				cout<<"Posal Code "<<postal<<endl;
			}
			else if(post == 2)
			{
				postal = 93;
				cout<<"PostOffice: Lahore"<<endl;
				cout<<"Posal Code "<<postal<<endl;
			}
			else if(post == 3)
			{
				postal = 94;
				cout<<"PostOffice: Karachi"<<endl;
				cout<<"Posal Code "<<postal<<endl;
			}
			else if(post == 4)
			{
				postal = 95;
				cout<<"PostOffice: Peshawar"<<endl;
				cout<<"Posal Code "<<postal<<endl;
			}
			else if(post == 5)
			{
				postal = 96;
				cout<<"PostOffice: Quetta"<<endl;
				cout<<"Posal Code "<<postal<<endl;
			}
			
		}
