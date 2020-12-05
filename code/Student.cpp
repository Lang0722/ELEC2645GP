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
	cout << "|          4.See available labs    |\n";
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
	bool flag = false;  // whether book successfully
	WeekDay selectDay;
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
		this->date = "Monday";
		selectDay = weekday->mon;
		cout << "Please select the time slots you want to book! " << endl;
		break;
	case 2:
		this->date = "Tuesday";
		selectDay = weekday->tue;
		cout << "Please select the time slots you want to book! " << endl;
		break;
	case 3:
		this->date = "Wednesday";
		selectDay = weekday->wed;
		cout << "Please select the time slots you want to book! " << endl;
		break;
	case 4:
		this->date = "Thursday";
		selectDay = weekday->thur;
		cout << "Please select the time slots you want to book! " << endl;
		break;
	case 5:
		this->date = "Friday";
		selectDay = weekday->fri;
		cout << "Please select the time slots you want to book! " << endl;
		break;
	case 0:
		return;
	default:
		cout << "Please enter a reasonable number from 1 to 5. " << endl;
		return;
	}
	cout << " ----Please choose a time slots------------------- " << endl;
	cout << "|                                                  |\n";
	cout << "|         1.Morning                                |" << endl;
	cout << "|                                                  |\n";
	cout << "|         2.Afternoon                              |" << endl;
	cout << "|                                                  |\n";
	cout << "|         0.Back to previous menu                  |\n";
	cout << "|                                                  |\n";
	cout << " ----Press number 1 or 2 to choose your slot.----- " << endl;
	temp = get_user_input();
	switch (temp) {
	case 1:
		this->timeslot = "Morning";
		cout << "Please choose the computers " << endl;
		break;
	case 2:
		this->timeslot = "Afternoon";
		cout << "Please choose the computers " << endl;
		break;
	case 0:
		return;
	default:
		cout << "Please enter 1 or 2 to choose. " << endl;
		return;
	}

	cout << " ----Please choose a computer------------------- " << endl;
	cout << "|                                                  |\n";
	cout << "|         1.Computer 1                             |" << endl;
	cout << "|                                                  |\n";
	cout << "|         2.Computer 2                             |" << endl;
	cout << "|                                                  |\n";
	cout << "|         3.Computer 3                             |\n";
	cout << "|                                                  |\n";
	cout << "|         0.back                                   |\n";
	cout << "|                                                  |\n";
	cout << " ----Press number 1 or 2 to choose your slot.----- " << endl;
	temp = get_user_input();
	switch (temp) {
	case 1:
		if (selectDay.computer1 == "Available")
		{
			flag = true;
			this->computer = "Computer1";
			cout << "You have successfully applied this computer" << endl;
			break;
		}
		else
		{
			this->date = "None";
			this->timeslot = "None";
			cout << "This computer has already booked by other student" << endl;
			break;
		}
	case 2:
		if (selectDay.computer2 == "Available")
		{
			flag = true;
			this->computer = "Computer2";
			cout << "You have successfully applied this computer" << endl;
			break;
		}
		else
		{
			this->date = "None";
			this->timeslot = "None";
			cout << "This computer has already booked by other student" << endl;
			cout << "Please check the available list" << endl;
			break;
		}
	case 3:
		if (selectDay.computer3 == "Available")
		{
			flag = true;
			this->computer = "Computer3";
			cout << "You have successfully applied this computer" << endl;
			break;
		}
		else
		{
			this->date = "None";
			this->timeslot = "None";
			cout << "This computer has already booked by other student" << endl;
			cout << "Please check the available list" << endl;
			break;
		}
	case 0:
		return;
	default:
		cout << "Please enter 1 to 3 to choose. " << endl;
		return;
	}

	if (flag)
	{
		cout << "Please wait for verification" << endl;
		this->status = "Under review";
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
			if (input >= 1 && input <= menu_items) {
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

