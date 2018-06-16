#include "Datos.h"
#include <iostream>
#include "parque.h"
using namespace std;

int main() {
  Datos d;
  Parque p;

  std::vector<int>vector=p.busquedaExhaustiva(d.espera,12,8,d.disfrute,d.traslado);


}
