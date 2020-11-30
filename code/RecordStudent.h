#pragma once
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include"Student.h"
#include "Date.h"
using namespace std;

class RecordStudent
{
public:
    RecordStudent();

	void updateRecord(string name,int id,string pw, Date* weekday);

	int size;

	vector<Student> Students;

	map<int,Student> Data;

};

