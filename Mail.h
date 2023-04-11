#include <iostream>
using namespace std;

#ifndef Mail_h
#define Mail_h

class Mail
{
	protected:
		MailService M;
	
	public:
		Mail();
		Mail(MailService m);
		void setMailService(MailService m);
		MailService getMailService();
		void MailDisplay();
};
#endif

