
#include "Person.h"
class Student :
	public Person
{
private:
	string course;
public:
	Student();
	Student(const string &name, int age, const string &course);
	void displayCourse() const;
	
};
