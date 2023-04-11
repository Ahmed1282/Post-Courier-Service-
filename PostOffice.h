#include <iostream>
using namespace std;
#ifndef PostOffice_h
#define PostOffice_h

class PostOffice
{
	protected:
		int post;
		
	public:
		PostOffice();
		PostOffice(int p);
		void setPost(int p);
		int getpost();
		void ShowPostOffice();
};
#endif
