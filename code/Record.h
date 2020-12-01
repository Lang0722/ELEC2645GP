#pragma once
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include"Student.h"
#include "Date.h"
#include "Teacher.h"
using namespace std;

class Record
{
public:
	Record();


	void updateRecord(Student* stu);  // add the student object to the vector
	void updateRecord(Teacher* tea);  // add the teacher object to the vector

	int size;

	vector<Student*> Students;  // store the student object
	vector<Teacher*> Teachers;  // store the teacher object


	/*map<int, Student> Data;*/

};

