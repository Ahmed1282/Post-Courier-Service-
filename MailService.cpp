#include <iostream>
#include "MailService.h"
using namespace std;

	MailService::MailService()
	{
		weight = 0;
		type = 0;
		dis = 0;
	}
	
	MailService::MailService(int w, int t, int d)
	{
		weight = w;
		type =t;
		dis = d;
	}
	
	void MailService::setweight(int w)
	{
		weight = w;
	}
	
	int MailService::getweight()
	{
		return weight;
	}
	
	void MailService::settype(int t)
	{
		type = t;
	}
	
	int MailService::gettype()
	{
		return type;
	}
	
	void MailService::setdis(int d)
	{
		dis = d;
	}
	
	int MailService::getdis()
	{
		return dis;
	}
	
	void MailService::MailServiceDisplay()
	{
		if(type == 1)
		{
			cout<<"Mail is Regular"<<endl;
		}
		else if(type == 2)
		{
			cout<<"Mail is Urgent"<<endl;
		}
	}
