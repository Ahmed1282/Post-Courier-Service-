#include <iostream>
using namespace std;

#ifndef PostalWorker_h
#define PostalWorker_h

class PostalWorker
{
	protected:
		string fname;
		string sname;
		string pnum;
		string email;
		
	public:
		PostalWorker();
		PostalWorker(string f_name, string s_name, string p_num, string Email);
		void setfirstname(string f_name);
		void setsecondname(string s_name);
		void setphonenum(string p_num);
		void setemail(string Email);
		string getfirstname();
		string getsecondname();
		string getphonenum();
		string getemail();
		void DisplayEmployee();
};
#endif
