#include <iostream>

using namespace std;
int main()
{
 // declare a pointer to int and allocate space for it
    // with the keyword new
    int *pInt = new int;

    // declare a pointer to double and allocate space for it
    // with the keyword new
    double * pDouble = new double;

    // store the value 3 in the memory location
    // pointed to by pInt
    *pInt = 3;

    // store the value 5.0 in the memory location
    // pointed to by pDouble
    *pDouble = 5.0;
    cout << "Valor almacenado en pInt = "<<*pInt << "| Direccion de memoria = "<<pInt<<endl;
    cout << "Valor almacenado en pDouble = "<<*pDouble << "| Direccion de memoria = "<<pDouble<<endl;

    cout << "size of pInt " <<sizeof(pInt)<<endl;
    cout << "size of *pInt " <<sizeof(*pInt)<<endl;

    cout << "size of pDouble " <<sizeof(pDouble)<<endl;
    cout << "size of *pDouble " <<sizeof(*pDouble)<<endl;


    //pInt++;//Aumentamos la posicion y tamaño ? si se aumenta esto se cambia
    //la direccion de memoria en 4 bytes y por ello no se puedeeliminar despues
    delete pInt;
    delete pDouble;
return 0;
}