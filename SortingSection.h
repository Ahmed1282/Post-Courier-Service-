#include <iostream>
using namespace std;

#ifndef SortingSection_h
#define SortingSection_h

class SortingSection
{
	protected:
		int check;
	
	public:
		SortingSection();
		SortingSection(int c);
		void setSortingSection(int c);
		int getSortingSection();
		void ShowStatus();
};
#endif
