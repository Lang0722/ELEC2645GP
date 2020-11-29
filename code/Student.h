//
// Created by 96540 on 2020/11/25.
//

#ifndef ELEC2645_STUDENT_H
#define ELEC2645_STUDENT_H

#include "person.h"
#include <string>

using namespace std;


class Student : public person {
public:
    Student(string name, int id, string password) : person(name, id, password) {
    	this->date = "None";
		this->timeslot = "None";
		this->status = "None";
    };

    string status;
    string timeslot;
    string date;

    void operationMenu();

    //void seeAvailable();

    void applyTheLab();

    void checkStatus();

    void cancleOrder();

    int get_user_input();
    bool is_integer(std::string num);

};


#endif //ELEC2645_STUDENT_H
