#include "Student.h"

Student::Student()
	:	course("{Unassigned course}")
{
	cout << "Hellos from Student::Student()" << endl;
}

Student::Student(const string & name, int age, const string & course)
	: Person(name, age ), course(course)
{
	cout << "Hello from Student::Student(String, int, string)" << endl;

}

void Student::displayCourse() const
{
	cout << course<<endl;
}

