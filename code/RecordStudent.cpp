#include "RecordStudent.h"
#include "Date.h"
RecordStudent::RecordStudent() {
	size = 0;
};

void RecordStudent::updateRecord(string name, int id, string pw, Date* weekday) {
	Student temp = Student(name, id, pw, weekday);
	Students.push_back(temp);
	Data.insert(pair<int, Student>(temp.id, temp));
	size++;
}