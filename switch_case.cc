#include<iostream>
using namespace std;

int main() {
  char a = 'o';
  switch(a){//das argument muss standart datentyp sein
    case 'b':
      std::cout << "nope" << '\n';
      break;
    case 'a':
      std::cout << "nope" << '\n';
      break;
    case 'o':
      std::cout << "yep" << '\n';
    default:
      std::cout << "break vergessen" << '\n';
  }
  return 0;
}
