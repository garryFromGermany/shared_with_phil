#include<iostream>
using namespace std;
#include<string>

int main(int argc, char const *argv[]) {

  string hallo = "hallo";
  if (hallo=="hallo"){
    std::cout << hallo << '\n';
  }else if(hallo== "hallo"){
    std::cout << "wird nicht ausgegeben, weil if-argument true" << '\n';
  }


  return 0;
}
