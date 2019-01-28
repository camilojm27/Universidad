#include "typeOf.h"


using namespace std;
int main(){

    Student Student1("Camilo", "Mezu", 17, "cra 83c","Cali",3226890290);
    Student Student2("Emily", "Casstle",13,"街 89-89c","北京- beijing",35845115);
    Student Student3("Samuel", "Perez", 23,"Avenida libertadores con 89-05","Puebla",2869153);

    Teacher Teacher1("Salomon", "Jimenez",34,"Cra 39 #9-17","Santiago De Cali", 3168421765);

    Course IntermedieCpp("Student1","Student2","Student3", "Teacher1");
    cout << "IntermedieCpp"<<endl;
    Student1.SitInClass();
    Teacher1.SitInClass();
    Teacher1.GradeStudent();
    return 0;
}