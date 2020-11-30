//
// Created by 96540 on 2020/11/29.
//

#ifndef ELEC2645GP_DATE_H
#define ELEC2645GP_DATE_H

#include <string>
#include <iostream>
#include "string.h"

using namespace  std;

struct WeekDay
{
    string day;
    string morning;
    string afternoon;
};


class Date {
public:
    Date();
    WeekDay mon;
    WeekDay tue;
    WeekDay wed;
    WeekDay thur;
    WeekDay fri;

public:
    void printData();
};


#endif //ELEC2645GP_DATE_H
