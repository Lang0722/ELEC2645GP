//
// Created by 96540 on 2020/11/29.
//

#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

Date::Date() {
    mon = {"Monday","Available","Available"};
    tue = {"Tuesday","Available","Available"};
    wed = {"Wednesday","Available","Available"};
    thur = {"Thursday","Available","Available"};
    fri = {"Friday","Available","Available"};
}

void Date::printData() {
    cout<< "Date" << "\t\t" << "Morning" <<"\t\t"<< "Afternoon"<<"\t\t" << "Computer 1" << "\t\t" << "Computer 2" << "\t\t" << "Computer 3" <<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<< mon.day << "\t\t"<< mon.morning << "\t\t" << mon.afternoon<< "\t\t" << mon.computer1 << "\t\t" << mon.computer2 << "\t\t" << mon.computer3 <<endl;
    cout<< tue.day << "\t\t"<< tue.morning << "\t\t" << tue.afternoon<< "\t\t" << tue.computer1 << "\t\t" << tue.computer2 << "\t\t" << tue.computer3 <<endl;
    cout<< wed.day << "\t"<< wed.morning << "\t\t" << wed.afternoon << "\t\t" << wed.computer1 << "\t\t" << wed.computer2 << "\t\t" << wed.computer3 << endl;
    cout<< thur.day << "\t"<< thur.morning << "\t\t" << thur.afternoon << "\t\t" << thur.computer1 << "\t\t" << thur.computer2 << "\t\t" << thur.computer3 << endl;
    cout<< fri.day << "\t\t"<< fri.morning << "\t\t" << fri.afternoon << "\t\t" << fri.computer1 << "\t\t" << fri.computer2 << "\t\t" << fri.computer3 << endl;
};
