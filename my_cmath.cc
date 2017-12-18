#include <iostream>
#include <cmath>

void sin (int resolution,double def_bereich){

    double y[resolution];
    for (int i = 0; i < resolution; i++) {
      y[i]= sin((i*def_bereich)/(double)resolution);
      std::cout << x[i] << '\n';
    }
}


int main(int argc, char const *argv[]) {

  sin(8,4*M_PI);
  return 0;
}
