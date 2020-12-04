//
// Created by 96540 on 2020/11/25.
//

#include "Student.h"
#include <regex>
#include<iostream>
#include "Date.h"
using namespace std;

void Student::operationMenu() {
	cout << "Welcome " << this->name << "  using this system!" << endl;
	cout << " ----------------------------------\n";
	cout << "|                                  |\n";
	cout << "|          1.Apply for using       |\n";
	cout << "|                                  |\n";
	cout << "|          2.Check my status       |\n";
	cout << "|                                  |\n";
	cout << "|          3.Cancel my order       |\n";
	cout << "|                                  |\n";
	cout << "|          4.See available         |\n";
	cout << "|                                  |\n";
	cout << "|          0.Quit                  |\n";
	cout << "|                                  |\n";
	cout << " ----------------------------------\n";
	cout << "Press number from 0-3 to continue : " << endl;
}

void Student::seeAvailable()
{
	this->weekday->printData();
}

void Student::applyTheLab() {
	//string flag; // which day
	cout << " ---The lab open for Monday to Friday.--- " << endl;
	cout << "|                                        |\n";
	cout << "|         1. Monday                      |" << endl;
	cout << "|                                        |\n";
	cout << "|         2. Tuesday                     |" << endl;
	cout << "|                                        |\n";
	cout << "|         3. Wednesday                   |" << endl;
	cout << "|                                        |\n";
	cout << "|         4. Thursday                    |" << endl;
	cout << "|                                        |\n";
	cout << "|         5. Friday                      |" << endl;
	cout << "|                                        |\n";
	cout << "|         0. Back to previous            |" << endl;
	cout << "|                                        |\n";
	cout << " ---Press number 1-5 to choose your day.- " << endl;
	int temp = get_user_input();
	switch (temp) {
	case 1:
		applySlotsMon();
		break;
	case 2:
		applySlotsTue();
		break;
	case 3:
		applySlotsWed();
		break;
	case 4:
		applySlotsThu();
		break;
	case 5:
		applySlotsFri();
		break;
	case 0:
		return;
	default:
		cout << "Please enter a reasonable number from 1 to 5. " << endl;
		return;
	}
}
void Student::checkStatus() {
	cout << "------------------------" << endl;
	cout << "Name: " << this->name << endl;
	cout << "Date: " << this->date << " Time slot: " << this->timeslot << endl;
	cout << "Status: " << this->status << endl;
	cout << "------------------------" << endl;
}

void Student::cancelOrder() {
	this->status = "None";
	this->date = "None";
	this->timeslot = "None";
	if (myApplication.date == "Monday") {
		if (myApplication.slot == "Morning")
			this->weekday->mon.morning = "Available";
		else
			this->weekday->mon.afternoon = "Available";
	}
	else if (myApplication.date == "Tuesday") {
		if (myApplication.slot == "Morning")
			this->weekday->tue.morning = "Available";
		else
			this->weekday->tue.afternoon = "Available";
	}
	else if (myApplication.date == "Wednesday") {
		if (myApplication.slot == "Morning")
			this->weekday->wed.morning = "Available";
		else
			this->weekday->wed.afternoon = "Available";
	}
	else if (myApplication.date == "Thursday") {
		if (myApplication.slot == "Morning")
			this->weekday->thur.morning = "Available";
		else
			this->weekday->thur.afternoon = "Available";
	}
	else if (myApplication.date == "Friday") {
		if (myApplication.slot == "Morning")
			this->weekday->fri.morning = "Available";
		else
			this->weekday->fri.afternoon = "Available";
	}
	cout << "You have successfully cancel an application " << endl;
}

int Student::get_user_input() {
	int input;
	std::string input_string;
	bool valid_input = false;
	int menu_items = 5;

	do {
		std::cout << "\nSelect item: ";
		std::cin >> input_string;
		valid_input = is_integer(input_string);
		// if input is not an integer, print an error message
		if (valid_input == false) {
			std::cout << "Enter an integer!\n";
		}
		else {  // if it is an int, check whether in range
			input = std::stoi(input_string);  // convert to int
			if (input >= 0 && input <= menu_items) {
				valid_input = true;
			}
			else {
				std::cout << "Invalid menu item!\n";
				valid_input = false;
			}
		}
	} while (valid_input == false);

	return input;
}

bool Student::is_integer(string num) {
	return std::regex_match(num, std::regex("[+-]?[0-9]+"));
}

void Student::applySlotsMon() {
	cout << " ----Please choose a time slots------------------- " << endl;
	cout << "|                                                  |\n";
	cout << "|         1.Morning                               |" << endl;
	cout << "|                                                  |\n";
	cout << "|         2.Afternoon                             |" << endl;
	cout << "|                                                  |\n";
	cout << "|         0.Back to previous menu                 |\n";
	cout << "|                                                  |\n";
	cout << " ----Press number 1 or 2 to choose your slot.----- " << endl;
	int temp;
	temp = get_user_input();
	switch (temp) {
	case 1:
		if (this->weekday->mon.morning != "Occupy   ") {
			this->date = "Monday";
			this->timeslot = "Morning";
			cout << "You have successfully book the lab in the morning! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Monday","Morning" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 2:
		if (this->weekday->mon.afternoon != "Occupy   ") {
			this->date = "Monday";
			this->timeslot = "Afternoon";
			cout << "You have successfully book the lab in the afternoon! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Monday","Afternoon" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 0:
		return;
	default:
		cout << "Please enter 1 or 2 to choose. " << endl;
		return;
	}
}

void Student::applySlotsTue() {
	cout << " ----Please choose a time slots------------------- " << endl;
	cout << "|                                                  |\n";
	cout << "|         1.Morning                               |" << endl;
	cout << "|                                                  |\n";
	cout << "|         2.Afternoon                             |" << endl;
	cout << "|                                                  |\n";
	cout << "|         0.Back to previous menu                 |\n";
	cout << "|                                                  |\n";
	cout << " ----Press number 1 or 2 to choose your slot.----- " << endl;
	int temp;
	temp = get_user_input();
	switch (temp) {
	case 1:
		if (this->weekday->tue.morning != "Occupy   ") {
			this->date = "Tuesday";
			this->timeslot = "Morning";
			cout << "You have successfully book the lab in the morning! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Tuesday","Morning" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 2:
		if (this->weekday->tue.afternoon != "Occupy   ") {
			this->date = "Tuesday";
			this->timeslot = "Afternoon";
			cout << "You have successfully book the lab in the afternoon! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Tuesday","Afternoon" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 0:
		return;
	default:
		cout << "Please enter 1 or 2 to choose. " << endl;
		return;
	}
}
void Student::applySlotsWed() {
	cout << " ----Please choose a time slots------------------- " << endl;
	cout << "|                                                  |\n";
	cout << "|         1.Morning                               |" << endl;
	cout << "|                                                  |\n";
	cout << "|         2.Afternoon                             |" << endl;
	cout << "|                                                  |\n";
	cout << "|         0.Back to previous menu                 |\n";
	cout << "|                                                  |\n";
	cout << " ----Press number 1 or 2 to choose your slot.----- " << endl;
	int temp;
	temp = get_user_input();
	switch (temp) {
	case 1:
		if (this->weekday->wed.morning != "Occupy   ") {
			this->date = "Wednesday";
			this->timeslot = "Morning";
			cout << "You have successfully book the lab in the morning! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Wednesday","Morning" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 2:
		if (this->weekday->mon.afternoon != "Occupy   ") {
			this->date = "Wednesday";
			this->timeslot = "Afternoon";
			cout << "You have successfully book the lab in the afternoon! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Wednesday","Afternoon" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 0:
		return;
	default:
		cout << "Please enter 1 or 2 to choose. " << endl;
		return;
	}
}

void Student::applySlotsThu() {
	cout << " ----Please choose a time slots------------------- " << endl;
	cout << "|                                                  |\n";
	cout << "|         1.Morning                               |" << endl;
	cout << "|                                                  |\n";
	cout << "|         2.Afternoon                             |" << endl;
	cout << "|                                                  |\n";
	cout << "|         0.Back to previous menu                 |\n";
	cout << "|                                                  |\n";
	cout << " ----Press number 1 or 2 to choose your slot.----- " << endl;
	int temp;
	temp = get_user_input();
	switch (temp) {
	case 1:
		if (this->weekday->thur.morning != "Occupy   ") {
			this->date = "Thursday";
			this->timeslot = "Morning";
			cout << "You have successfully book the lab in the morning! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Thursday","Morning" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 2:
		if (this->weekday->thur.afternoon != "Occupy   ") {
			this->date = "Thursday";
			this->timeslot = "Afternoon";
			cout << "You have successfully book the lab in the afternoon! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Thursday","Afternoon" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 0:
		return;
	default:
		cout << "Please enter 1 or 2 to choose. " << endl;
		this->date = "None";
		return;
	}
}

void Student::applySlotsFri() {
	cout << " ----Please choose a time slots------------------- " << endl;
	cout << "|                                                  |\n";
	cout << "|         1.Morning                               |" << endl;
	cout << "|                                                  |\n";
	cout << "|         2.Afternoon                             |" << endl;
	cout << "|                                                  |\n";
	cout << "|         0.Back to previous menu                 |\n";
	cout << "|                                                  |\n";
	cout << " ----Press number 1 or 2 to choose your slot.----- " << endl;
	int temp;
	temp = get_user_input();
	switch (temp) {
	case 1:
		if (this->weekday->fri.morning != "Occupy   ") {
			this->date = "Friday";
			this->timeslot = "Morning";
			cout << "You have successfully book the lab in the morning! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Friday","Morning" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 2:
		if (this->weekday->fri.afternoon != "Occupy   ") {
			this->date = "Friday";
			this->timeslot = "Afternoon";
			cout << "You have successfully book the lab in the afternoon! " << endl;
			cout << "Please wait for verification" << endl;
			this->status = "Under review";
			this->myApplication = { "Friday","Afternoon" };
		}
		else {
			cout << "This time slot was occupied, please choose another." << endl;
			return;
		}
		break;
	case 0:
		return;
	default:
		cout << "Please enter 1 or 2 to choose. " << endl;
		return;
	}
}



