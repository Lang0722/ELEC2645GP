//
// Created by 96540 on 2020/11/25.
//

#pragma once

#include "person.h"
#include <string>
#include "Date.h"
#include<map>

using namespace std;

struct Application {
    string date;
    string slot;
};

class Student : public person {
public:
    Student(string name, int id, string password, Date* weekday) : person(name, id, password) {
    	this->date = "None";
		this->timeslot = "None";
		this->status = "None";
		this->weekday = weekday;
        this->myApplication = { "None","None" };
    };

    string status;
    string timeslot;
    string date;
    Application myApplication;
    Date* weekday;

    void applySlotsMon();
    void applySlotsTue();
    void applySlotsWed();
    void applySlotsThu();
    void applySlotsFri();

    void operationMenu();

    void seeAvailable();

    void applyTheLab();

    void checkStatus();

    void cancelOrder();

    int get_user_input();
    bool is_integer(std::string num);

};



