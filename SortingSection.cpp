#include <iostream>
#include "SortingSection.h"

	SortingSection::SortingSection()
	{
		check = 0;	
	}
	
	SortingSection::SortingSection(int c)
	{
		check = c;
	}
	
	void SortingSection::setSortingSection(int c)
	{
		check = c;
	}
	
	int SortingSection::getSortingSection()
	{
		return check;
	}
	
	void SortingSection::ShowStatus()
	{
		if(check == 1)
		{
			cout<<"Mail Recieved"<<endl;
		}
		else if(check == 2)
		{
			cout<<"Reciever hasn't picked it up"<<endl;
			cout<<"Kindly visit your neareast post office for further details"<<endl;
		}
	}
