//
// Created by 96540 on 2020/11/25.
//

#include "Teacher.h"
#include <iostream>
#include "Student.h"

using namespace std;


void Teacher::checkApplication(vector<Student*> Students)
{
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "Name\t" << "Date\t" << "Timeslote\t" << "Computer"<< endl;
	for (int i = 0; i < (int)Students.size(); i++) {
		if (Students[i]->status == "Under review") {
			cout << Students[i]->name << "\t" << Students[i]->date << "\t" << Students[i]->timeslot << "\t" << Students[i]->computer<< endl;

		}
	}
	cout << "Computer 1 to 3 are for morning, computer 4 to 6 are for afternoon." << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
}

void Teacher::permitApplication(vector<Student*> Students)
{
	string temp;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "If you want to permit an application, please enter the name of applicant" << endl;
	cout << "If you want to go back to last menu, please enter back" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	while (1) {
		cin >> temp;
		if (temp == "back") {
			break;
		}
		else {

			for (int i = 0; i < (int)Students.size(); i++) {
				if (Students[i]->name == temp) {
					if (Students[i]->status == "Under review")
					{
						Students[i]->status = "Verified";
						if (Students[i]->date == "Monday") {
							if (Students[i]->timeslot == "Morning")
							{
								if (Students[i]->computer == "computer1")
									Students[i]->weekday->mon.computer1 = "Occupy";
								else if (Students[i]->computer == "computer2")
									Students[i]->weekday->mon.computer2 = "Occupy";
								else
									Students[i]->weekday->mon.computer3 = "Occupy";
							}
							else
							{
								if (Students[i]->computer == "computer4")
									Students[i]->weekday->mon.computer4 = "Occupy";
								else if (Students[i]->computer == "computer5")
									Students[i]->weekday->mon.computer5 = "Occupy";
								else
									Students[i]->weekday->mon.computer6 = "Occupy";
							}
						}
						else if (Students[i]->date == "Tuesday") {
							if (Students[i]->timeslot == "Morning")
							{
								if (Students[i]->computer == "computer1")
									Students[i]->weekday->tue.computer1 = "Occupy";
								else if (Students[i]->computer == "computer2")
									Students[i]->weekday->tue.computer2 = "Occupy";
								else
									Students[i]->weekday->tue.computer3 = "Occupy";
							}
							else
							{
								if (Students[i]->computer == "computer4")
									Students[i]->weekday->tue.computer4 = "Occupy";
								else if (Students[i]->computer == "computer5")
									Students[i]->weekday->tue.computer5 = "Occupy";
								else
									Students[i]->weekday->tue.computer6 = "Occupy";
							}
						}
						else if (Students[i]->date == "Wednesday") {
							if (Students[i]->timeslot == "Morning")
							{
								if (Students[i]->computer == "computer1")
									Students[i]->weekday->wed.computer1 = "Occupy";
								else if (Students[i]->computer == "computer2")
									Students[i]->weekday->wed.computer2 = "Occupy";
								else
									Students[i]->weekday->wed.computer3 = "Occupy";
							}
							else
							{
								if (Students[i]->computer == "computer4")
									Students[i]->weekday->wed.computer4 = "Occupy";
								else if (Students[i]->computer == "computer5")
									Students[i]->weekday->wed.computer5 = "Occupy";
								else
									Students[i]->weekday->wed.computer6 = "Occupy";
							}
						}
						else if (Students[i]->date == "Thursday") {
							if (Students[i]->timeslot == "Morning")
							{
								if (Students[i]->computer == "computer1")
									Students[i]->weekday->thur.computer1 = "Occupy";
								else if (Students[i]->computer == "computer2")
									Students[i]->weekday->thur.computer2 = "Occupy";
								else
									Students[i]->weekday->thur.computer3 = "Occupy";
							}
							else
							{
								if (Students[i]->computer == "computer4")
									Students[i]->weekday->thur.computer4 = "Occupy";
								else if (Students[i]->computer == "computer5")
									Students[i]->weekday->thur.computer5 = "Occupy";
								else
									Students[i]->weekday->thur.computer6 = "Occupy";
							}
						}
						else if (Students[i]->date == "Friday") {
							if (Students[i]->timeslot == "Morning")
							{
								if (Students[i]->computer == "computer1")
									Students[i]->weekday->fri.computer1 = "Occupy";
								else if (Students[i]->computer == "computer2")
									Students[i]->weekday->fri.computer2 = "Occupy";
								else
									Students[i]->weekday->fri.computer3 = "Occupy";
							}
							else
							{
								if (Students[i]->computer == "computer4")
									Students[i]->weekday->fri.computer4 = "Occupy";
								else if (Students[i]->computer == "computer5")
									Students[i]->weekday->fri.computer5 = "Occupy";
								else
									Students[i]->weekday->fri.computer6 = "Occupy";
							}
						}
						cout << "Application verified" << endl;
						cout << "----------------------------------------------------------------------------------" << endl;
						cout << "If you want to permit an application, please enter the name of applicant" << endl;
						cout << "If you want to go back to last menu, please enter back" << endl;
						cout << "----------------------------------------------------------------------------------" << endl;
						break;
					}
					else
					{
						cout << "----------------------------------------------------------------------------------" << endl;
						cout << "This student does not apply for the lab" << endl;
						cout << "If you want to go back to last menu, please enter back" << endl;
						cout << "----------------------------------------------------------------------------------" << endl;
						break;
					}
				}
				else {
					if (i != (int)Students.size()-1)
					{
						continue;
					}
					else{
					cout << "There is no student named " << temp << endl;
					cout << "----------------------------------------------------------------------------------" << endl;
					cout << "If you want to permit an application, please enter the name of applicant" << endl;
					cout << "If you want to go back to last menu, please enter back" << endl;
					cout << "----------------------------------------------------------------------------------" << endl;
					break;
						}
				}


			}



		}
	}
}

void Teacher::operationMenu()
{
	cout << "Welcome " << this->name << "  using this system!" << endl;
	cout << " ----------------------------------\n";
	cout << "|                                  |\n";
	cout << "|          1.Check Application     |\n";
	cout << "|                                  |\n";
	cout << "|          2.Permit Application    |\n";
	cout << "|                                  |\n";
	cout << "|          0.Quit                  |\n";
	cout << "|                                  |\n";
	cout << " ----------------------------------\n";
	cout << "Press number from 0-2 to continue : " << endl;
}
