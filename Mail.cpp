#include <iostream>
#include "MailService.h"
#include "Mail.h"
using namespace std;

		Mail::Mail()
		{
			M = MailService();
		}
		Mail::Mail(MailService m)
		{
			M = m;
		}
		void Mail::setMailService(MailService m)
		{
			M = m;
		}
		MailService Mail::getMailService()
		{
			return M;
		}
		void Mail::MailDisplay()
		{
			cout<<"-----Mail Details------"<<endl<<endl;
			M.MailServiceDisplay();
		}






