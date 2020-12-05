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
    string timeslot;
    cout << "Please select morning or afternoon" << endl;
    cin >> timeslot;
    if (timeslot == "morning")
    {
        cout << "Date" << "\t\t" << "Computer 1" << "\t" << "Computer 2" << "\t" << "Computer 3" << endl;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << mon.day << "\t\t" << mon.computer1 << "\t" << mon.computer2 << "\t" << mon.computer3 << endl;
        cout << tue.day << "\t\t" << tue.computer1 << "\t" << tue.computer2 << "\t" << tue.computer3 << endl;
        cout << wed.day << "\t" << wed.computer1 << "\t" << wed.computer2 << "\t" << wed.computer3 << endl;
        cout << thur.day << "\t" << thur.computer1 << "\t" << thur.computer2 << "\t" << thur.computer3 << endl;
        cout << fri.day << "\t\t" << fri.computer1 << "\t" << fri.computer2 << "\t" << fri.computer3 << endl;
    }
    else if (timeslot == "afternoon")
    {
        cout << "Date" << "\t\t" << "Computer 1" << "\t" << "Computer 2" << "\t" << "Computer 3" << endl;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << mon.day << "\t\t" << mon.computer4 << "\t" << mon.computer5 << "\t" << mon.computer6 << endl;
        cout << tue.day << "\t\t" << tue.computer4 << "\t" << tue.computer5 << "\t" << tue.computer6 << endl;
        cout << wed.day << "\t" << wed.computer4 << "\t" << wed.computer5 << "\t" << wed.computer6 << endl;
        cout << thur.day << "\t" << thur.computer4 << "\t" << thur.computer5 << "\t" << thur.computer6 << endl;
        cout << fri.day << "\t\t"<< fri.computer4 << "\t" << fri.computer5 << "\t" << fri.computer6 << endl;
    }
    else
    {
        cout << "-------------------------------------" << endl;
        cout << "You enter the wrong word." << endl;
        cout << "-------------------------------------" << endl;
    }
};
