#pragma once
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include"Student.h"
#include "Date.h"
#include "Teacher.h"
using namespace std;

class RecordStudent
{
public:
	RecordStudent();


	void updateRecord(Student* stu);
	void updateRecord(Teacher* tea);

	int size;

	vector<Student*> Students;
	vector<Teacher*> Teachers;


	/*map<int, Student> Data;*/

};

