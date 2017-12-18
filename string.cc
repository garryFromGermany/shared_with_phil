#include<iostream>
#include<string>
using namespace std;   //ohne das funktioniert string nicht!




int main(int argc, char const *argv[]) {
string hallo = "hallo";
string _welt = " Welt";
string botschaft = hallo + _welt;
std::cout << botschaft << '\n';
  return 0;
}
