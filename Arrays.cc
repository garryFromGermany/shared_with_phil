#include<iostream>

int main(int argc, char const *argv[]) {
  int  array[3][2]={{100,101},  {110,111},  {120,121}}; //vollständig initialisiert
  int unvoll[3][2]={{1  ,2  },  {3      }            }; //unvollständig
  std::cout << array[1][0] << '\n';
  std::cout << unvoll[2][0] << '\n';                     //funtioniert trotzdem
  return 0;
}
