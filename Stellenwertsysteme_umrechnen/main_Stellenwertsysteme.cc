#include<iostream>
using namespace std;
#include <string>



int zahl, alte_Basis, neue_Basis;
string string_zahl, string_alte_Basis, string_neue_Basis;

int main(int argc, char const *argv[]) {
  cout << "geben Sie eine Zahl ein, die"
       << "Basis in der sie geschrieben ist, die "
       << "Basis in die Sie sie konvertieren möchten" << endl;
  cin >> string_zahl >> string_alte_Basis >> string_neue_Basis;
zahl = stoi( string_zahl );
//alte_Basis = stoi(string_alte_Basis);
//neue_Basis = stoi(string_neue_Basis);
//  cout << zahl << " "
//       << alte_Basis << " "
//       << neue_Basis;
  return 0;
}
