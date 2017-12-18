#include<iostream>

int factorial (int a){
  if (a>1)
    return a * factorial(a-1);
  else
    return 1;
}
int main(int argc, char const *argv[]) {
  int number = 9;
  std::cout << factorial(number) << '\n';
  return 0;
}
