#pragma once
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include"Student.h"
using namespace std;

class RecordStudent
{
public:
    RecordStudent();

	void updateRecord(string name,int id,string pw);

	int size;

	vector<Student> Students;

	map<int,Student> Data;

};

