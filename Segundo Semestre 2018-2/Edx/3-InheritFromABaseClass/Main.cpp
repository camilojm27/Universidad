#include "Student.h"

int main() {
	//Create a student using the no argument constructor
	Student student1;
	student1.displayNameAge();
	student1.displayCourse();

	//Create a student using the  parameterized constructor
	Student student2("Julian Smith", 23, "Physics");
	student2.displayNameAge();
	student2.displayCourse();

	return 0; 
}