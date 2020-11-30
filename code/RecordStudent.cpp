#include "RecordStudent.h"
#include "Date.h"
RecordStudent::RecordStudent() {
	size = 0;
}
void RecordStudent::updateRecord(Student* stu)
{
	Students.push_back(stu);
	size++;
}

void RecordStudent::updateRecord(Teacher* tea)
{
	Teachers.push_back(tea);
	size++;
}

