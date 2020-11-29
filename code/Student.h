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
    Student(string name, int id, string password) : person(name, id, password) {};
    string status;

    void seeAvailable();

    void applyTheLab();

    void checkStatus();

};


#endif //ELEC2645_STUDENT_H
