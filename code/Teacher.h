//
// Created by 96540 on 2020/11/25.
//

#ifndef ELEC2645_TEACHER_H
#define ELEC2645_TEACHER_H

#include "person.h"
#include "Student.h"
#include <vector>



class Teacher : public person {
public:
    Teacher(string name, int id, string password) : person(name, id, password) {};

    void checkApplication(vector<Student*> Students);

    void permitApplication(vector<Student*> Students);

    void operationMenu();

};


#endif //ELEC2645_TEACHER_H
