#include<iostream>
using namespace std;
#include <string>



int zahl, alte_Basis, neue_Basis;

int umwandeln(int zahl, int alte_Basis, int neue_Basis){
int neuer_rest;
int alter_rest=zahl;
  for(int i= 0; neuer_rest>0;i++){
    neuer_rest = alter_rest;
    neuer_rest = %10;
  }
}


int main(int argc, char const *argv[]) {
  cout << "geben Sie eine Zahl ein, die"
       << "Basis in der sie geschrieben ist, die "
       << "Basis in die Sie sie konvertieren möchten" << endl;
  cin >> zahl >> alte_Basis >> neue_Basis;

  cout << zahl << " "
       << alte_Basis << " "
       << neue_Basis;

  return 0;
}
