//
// Created by 96540 on 2020/11/29.
//

#pragma once

#include <string>
#include <iostream>
#include "string.h"

using namespace  std;

struct WeekDay
{
    string day;
    string morning;
    string afternoon;
    string computer1 = "Available";
    string computer2 = "Available";
    string computer3 = "Available";
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



