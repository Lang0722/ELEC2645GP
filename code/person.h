//
// Created by 96540 on 2020/11/24.
//

#ifndef ELEC2645_PERSON_H
#define ELEC2645_PERSON_H
#include <string>

using namespace std;

class person {
public:
    person(string name,int id,string password){
        this->name = name;
        this->id = id;
        this->password = password;
    };

    string name;
    int id;

    string getPassword(){
        return this->password;
    };

    void changPassword(string newpassword){
        this->password = newpassword;
    };

private:
    string password{};


};


#endif //ELEC2645_PERSON_H
