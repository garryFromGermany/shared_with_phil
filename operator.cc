#include<iostream>

struct vector{
  int x;
};

 vector operator+(vector a, vector c){
   vector b;
    b.x = a.x + c.x;
   return b;
 }




int main() {

  vector b;
  vector c;
  b.x = 3;
  c.x = 3;
  vector d = operator+(b,c);
  std::cout << d.x <<std::endl;
  return 0;
}
