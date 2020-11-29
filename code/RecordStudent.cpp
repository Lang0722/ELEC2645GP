#include "RecordStudent.h"
RecordStudent::RecordStudent() {
	size = 0;
};

void RecordStudent::updateRecord(string name, int id, string pw) {
	Student temp = Student(name, id, pw);
	Students.push_back(temp);
	Data.insert(pair<int, Student>(temp.id, temp));
	size++;
}