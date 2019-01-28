#include "typeOf.h"

Student::Student(string name,string lastName, int age, string address, string city, int phone){
    /* 名 - Míng- Nombre*/
    /* 姓 - Xìng- Apellido*/
    /* 年龄- Niánlíng- Edad*/
    /* 地址 Dìzhǐ- Dirección*/
    /* 市 - Shì- Ciudad*/
    /*電話 - 电话 Diànhuà- Telefono*/
   this->name = name;
   this->lastName = lastName;
   this->age =  age;
   this->address = address;
   this->city = city;
   this->phone = phone;
}
void Student::SitInClass(){
    cout << "Sitting at front of class"<<endl;
}

Teacher::Teacher(string name,string lastName, int age, string address, string city, int phone){   

   this->name = name;
   this->lastName = lastName;
   this->age =  age;
   this->address = address;
   this->city = city;
   this->phone = phone;
   
}
void Teacher::GradeStudent(){
    cout << "Student graded"<<endl;
}
void Teacher::SitInClass(){
    cout << "Sitting in main theater"<<endl;
}

Course::Course(string studentObj,string studentObj2,string studentObj3, string teacherObj){

    for(int  i = 0; i < 3; i++)
    {
        this->privStudentObj[i] = studentObj;
    }
    
this->privTecaherObj[0] = teacherObj;

}