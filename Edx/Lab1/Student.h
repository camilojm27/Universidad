#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;       /* 名 - Míng- Nombre*/
    string lastName;        /* 姓 - Xìng- Apellido*/
    int age;        /* 年龄- Niánlíng- Edad*/
    string address;     /* 地址 Dìzhǐ- Dirección*/
    string city;       /* 市 - Shì- Ciudad*/
    int phone;        /*電話 - 电话 Diànhuà- Telefono*/

public:
    Student(string name,string lastName, int age, string address, string city, int phone);
    void SitInClass();
};

class Teacher
{
private:
    string name;       /* 名 - Míng- Nombre*/
    string lastName;        /* 姓 - Xìng- Apellido*/
    int age;        /* 年龄- Niánlíng- Edad*/
    string address;     /* 地址 Dìzhǐ- Dirección*/
    string city;       /* 市 - Shì- Ciudad*/
    int phone;        /*電話 - 电话 Diànhuà- Telefono*/
public:
    Teacher(string name,string lastName, int age, string address, string city, int phone);
    void GradeStudent();
    void SitInClass();
};


class Course
{
private:
    string privStudentObj[3];
    string privTecaherObj[1];
    
public:
    Course(string studentObj,string studentObj2,string studentObj3, string teacherObj);
};
