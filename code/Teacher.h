//
// Created by 96540 on 2020/11/25.
//

#ifndef ELEC2645_TEACHER_H
#define ELEC2645_TEACHER_H

#include "person.h"


class Teacher : public person {
public:
    Teacher(string name, int id, string password) : person(name, id, password) {};

    void checkApplication();

    void permitApplication();

};


#endif //ELEC2645_TEACHER_H
