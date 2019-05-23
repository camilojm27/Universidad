#include "Person.h"



Person::Person()
	: name("[Unkwnow name]"), age(0)
{
		cout << "Hello From Person::Person()" <<endl;
}

Person::Person(const string & name, int age)
	: name(name),age(age)
{
	cout << "Hello from Person::Person (const string & name, int age)" << endl;
}

void Person::displayNameAge() const
{
	cout << name << ", " << age << endl;
}
