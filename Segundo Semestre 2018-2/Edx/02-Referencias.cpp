#include <iostream>

using namespace std;
/*int main(){

    int num = 3;
    int &refNum = num;

    cout << "num contains " << num << endl;
    cout << "refNum contains " << refNum << endl;

    refNum++;    // increment refNum by 1

    cout << "num contains " << num << endl;
    cout << "refNum contains " << refNum << endl;
    cout << "refNum is located at " << &refNum << " and num is located at " << &num << endl;
    cout << "-----------------------------------------------"<<endl;
return 0;
}
*/

void passByValue(int);

    int main()
    {

        int num = 3;
        cout << "In main()" << endl;
        cout << "Value of num is " << num << endl;

        passByValue(num);

        cout << "Back in main and the value of num is  " << num << endl;


        return 0;
    }

    void passByValue(int num1)
    {
        cout << "In passByValue()" << endl;
        cout << "Value of num1 is " << num1 << endl;

        // modify num1, won't impact num
        num1++;

        cout << "num1 is now " << num1 << endl;
    }
/*Al ingresar la variable num1, esta solo pasa una copia de su valor interno, más no
se pasa la variable en si, para hacer esto tendriamos que declarar en la funcion passByValue
num1 como una referencia para que ingrese directamente al valor de num*

void passByRef(int &num1);

    int main()
    {

        int num = 3;
        cout << "In main()" << endl;
        cout << "Value of num is " << num << endl;

        passByRef(num);

        cout << "Back in main and the value of num is  " << num << endl;


        return 0;
    }

    void passByRef(int &num1)
    {
        cout << "In passByRef()" << endl;
        cout << "Value of num1 is " << num1 << endl;

        // modify num1 which will now change num
        num1++;

        cout << "num1 is now " << num1 << endl;
    }

    This produces the following output:

    In main()
    Value of num is 3
    In passByRef()
    Value of num1 is 3
    num1 is now 4
    Back in main and the value of num is  4

    Because we passed num as a reference, C++ was able to access the contents of num directly 
    in memory rather than a copy of the value held by num as in the passByValue() example.*/