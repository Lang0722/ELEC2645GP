//
// Created by 96540 on 2020/11/25.
//

#pragma once

#include "person.h"
#include <string>
#include "Date.h"

using namespace std;


class Student : public person {
public:
    Student(string name, int id, string password, Date* weekday) : person(name, id, password) {
    	this->date = "None";
		this->timeslot = "None";
		this->status = "None";
        this->computer = "None";
		this->weekday = weekday;
    };
    ~Student()
    {
        delete weekday;
    }

    string status;
    string timeslot;
    string date;
    string computer;
    Date* weekday;


    void operationMenu();

    void seeAvailable();

    void applyTheLab();

    void checkStatus();

    void cancelOrder();

    int get_user_input();
    bool is_integer(std::string num);

};



