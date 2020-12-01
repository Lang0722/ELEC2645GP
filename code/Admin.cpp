//
// Created by 96540 on 2020/11/29.
//

#include "Admin.h"
#include <iostream>

using namespace std;

void Admin::checkApplication(Record* record)
{
	cout << "Name\t" << "Date\t" << "Time slot\t" << endl;
	for(auto i : record->Students )
		if (i->status == "Under review") {
			cout << i->name << "\t" << i->date << "\t" << i->timeslot << "\t" << endl;
		}
}
void Admin::permitApplication(Record* record)
{
	cout << "------------------------------------------------------------------------" << endl;
	cout << "If you want to permit an application, please enter the name of applicant" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cin >> name;
	for (auto i : record->Students)
	{
		if (i->name == name)
		{
			i->status = "Verified";
			cout << "-----------------------" << endl;
			cout << "Application verified" << endl;
			cout << "-----------------------" << endl;

			if (i->date == "Monday") {
				if (i->timeslot == "Morning")
					i->weekday->mon.morning = "Occupy";
				else
					i->weekday->mon.afternoon = "Occupy";
			}
			else if (i->date == "Tuesday") {
				if (i->timeslot == "Morning")
					i->weekday->tue.morning = "Occupy";
				else
					i->weekday->tue.afternoon = "Occupy";
			}
			else if (i->date == "Wednesday") {
				if (i->timeslot == "Morning")
					i->weekday->wed.morning = "Occupy";
				else
					i->weekday->wed.afternoon = "Occupy";
			}
			else if (i->date == "Thursday") {
				if (i->timeslot == "Morning")
					i->weekday->thur.morning = "Occupy";
				else
					i->weekday->thur.afternoon = "Occupy";
			}
			else if (i->date == "Friday") {
				if (i->timeslot == "Morning")
					i->weekday->fri.morning = "Occupy";
				else
					i->weekday->fri.afternoon = "Occupy";
			}

			cout << "If you want to permit another applications, please enter back to the Operation Menu" << endl;
			cout << "-------------------------------------------------------------------------------------" << endl;
			cin >> name;
			if (name == "back")
			{
				break;
			}
		}
		if (i == record->Students.back())
		{
			cout << "There is no student named " << name << endl;
			cout << "Please enter back to the Operation Menu" << endl;
			cout << "----------------------------------------" << endl;
			cin >> name;
			if (name == "back")
			{
				break;
			}			
		}
	}
}

void Admin::cancelApplication(Record* record)
{
	string name;

	cout << "Name\t" << "Date\t" << "Time slot\t" << endl;
	for (auto i : record->Students)
		if (i->status == "Verified") {
			cout << i->name << "\t" << i->date << "\t" << i->timeslot << "\t" << endl;
		}
	cout << "------------------------------------------------------------------------" << endl;
	cout << "If you want to cancel an application, please enter the name of applicant" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cin >> name;

	for (auto i : record->Students)
	{
		if (i->name == name)
		{
			i->status = "None";
			cout << "-----------------------" << endl;
			cout << "Application canceled" << endl;
			cout << "-----------------------" << endl;
			cout << "If you want to cancel another applications, please enter back to the Operation Menu" << endl;
			cout << "-------------------------------------------------------------------------------------" << endl;
			cin >> name;
			if (name == "back")
			{
				break;
			}
		}
		if (i == record->Students.back())
		{
			cout << "There is no student named " << name << endl;
			cout << "Please enter back to the Operation Menu" << endl;
			cout << "-----------------------------------------" << endl;
			cin >> name;
			if (name == "back")
			{
				break;
			}
		}
	}
	
}

void Admin::changeInfo(Record* record)
{
	string name;
	string password;
	bool stage = true;
	showAlluser(record);

	cout << "----------------------------------------------------------------------------" << endl;
	cout << "If you want to change someone's information, please enter the name of people" << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cin >> name;

	for (auto i : record->Students)
	{
		if (name == i->name)
		{
			cout << "Please enter the new password of this people" << endl;
			cin >> password;
			i->changPassword(password);
			stage = false;
			break;
		}
	}

	if (stage)
	{
		for (auto i : record->Teachers)
		{
			if (name == i->name)
			{
				cout << "Please enter the new password of this people" << endl;
				cin >> password;
				i->changPassword(password);
				break;
			}
			if (i == record->Teachers.back())
			{
				cout << "There is no people named " << name << endl;
				cout << "Please enter back to the Operation Menu" << endl;
				cout << "-----------------------------------------" << endl;
				cin >> name;
				if (name == "back")
				{
					break;
				}
			}
		}
	}



	
}


void Admin::operationMenu()
{
	cout << "Welcome " << this->name << "  using this system!" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|        1.Check Application       |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|        2.Permit Application      |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|        3.Cancel Application      |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|        4.Change user's password  |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|        5.Add User                |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|        0.Quit                    |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "Press number from 0-5 to continue : " << endl;
}

void Admin::showAlluser(Record* record)
{
	cout << "Student" << endl;
	cout << "-----------------------------" << endl;
	for (auto i : record->Students)
	{
		cout << i->id << "\t"<< i->name << "\t" << i->getPassword() <<endl;
	}
	cout << "-----------------------------" << endl;
	cout << "Teacher" << endl;
	for (auto i : record->Teachers)
	{
		cout << i->id << "\t" << i->name << "\t" << i->getPassword() << endl;
	}
	cout << "-----------------------------" << endl;
}
