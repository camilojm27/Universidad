#include <iostream>
#include <math.h>
#include <vector>


using namespace std;

int modulo(int dividendo, int divisor) {
  int residuo, cociente = 0;
  if (dividendo == 0) {
    return 0;
  }

  if (dividendo > 0) {

    do {
      /* code */

      if ((cociente + 1) * divisor < dividendo) {
        residuo = dividendo - ((cociente + 1) * divisor);
        return residuo;
      } else {
        cociente++;
      }
    } while ((cociente + 1) * divisor < dividendo);
  }
}

int mcd(int number1, int number2) {

  vector<int> n;
  vector<int> m;
  vector<int> q;
  vector<int> r;

  unsigned paso = 0;
  bool pos;

  do {

    if (number1 == number2) {
      return number2;
    }
    if (number1 == 0) {
      return number2;
    }

    if (number2 == 0) {
      return number1;
    }

    n.assign(1, number1);
    m.assign(1, number2);
    q.assign(1, ((n[pos]) / m[pos]));
    r.assign(1, ((n[pos]) % m[pos]));

    cout << r[paso] << endl;
    cout << remainder(n[pos], m[pos]) << endl;

    pos = false;

  } while (pos);
}

int main() {
  // mcd(512,48);
  // mcd(-12,5);
  cout << modulo(4, 2) << endl;
  return 0;
}