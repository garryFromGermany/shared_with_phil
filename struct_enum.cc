#include<iostream>
using namespace std;

struct komplex {
  double Im;
  double Re;
};           //das semikolon ist wichtig

enum basiskomponenten {y,x};
int main(int argc, char const *argv[]) {

  basiskomponenten k = y;
  komplex i;     //variablen müssen lokal definiert werden
  i.Im = 1.;     //der Punkt für double ist nicht notwendig
  i.Re = 0;

  std::cout << i.Im << '\n';
  std::cout << k << '\n';     //spuckt 0 aus, weil enum wird  jeder stelle ein Wert zugeordnet
  return 0;
}
