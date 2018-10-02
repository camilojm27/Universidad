#include <iostream>

using namespace std;
int main(){

    int num = 3;
    int &refNum = num;

    cout << "num contains " << num << endl;
    cout << "refNum contains " << refNum << endl;

    refNum++;    // increment refNum by 1

    cout << "num contains " << num << endl;
    cout << "refNum contains " << refNum << endl;
    cout << "refNum is located at " << &refNum << " and num is located at " << &num << endl;


return 0;
}