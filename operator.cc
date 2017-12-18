#include<iostream>
using namespace std;

struct vector{
  int x;
};

 vector operator+(vector a, vector c){  //das Wort operator ist wichtig
   vector b;
    b.x = a.x + c.x;
   return b;
 }

int main() {
  
  vector b;
  vector c;
  b.x = 3;
  c.x = 3;
  vector d = b + c;            //schau es funktioniert
  vector e = operator+(b,c); //das geht immernoch
  cout << d.x << endl
       << e.x;
  return 0;
}
