#include "Parque.h"
using namespace std;
Parque::Parque() {

}

Parque::~Parque() {

}

vector<int> Parque::busquedaExhaustiva(const int** espera, int m, int n, const int* disfrute, const int** traslado) {
  vector<int> solucion((d.m)/2, 0);
  vector<int> sigma((d.m)/2, 0);

  int num=fase(espera, m, n, disfrute,traslado, 0, 0, sigma, 1, 1,solucion);
   cout<<num<<endl;
  for(int i=0;i<15;i++)
      cout<<solucion[i];
  return solucion;

}

vector<int> Parque::programacionDinamica(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

vector<int> Parque::algoritmoAvido(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

int Parque::fase(const int** espera, int m, int n, const int* disfrute, const int** traslado, int suma, int nvisitados, vector<int> sigma, int i, int j, vector<int> &solucion) {

    if (suma >= m || j>n ||suma+traslado[j][n]>=m) {
      return nvisitados;
    }
    if(j==sigma[i-1]){
        sigma[i]=j+1;
    }else{
        sigma[i]=j;
    }

    ++nvisitados;


    if(i==1){
        suma+=traslado[0][sigma[i]-1];
    }

    if(sigma[i]<(n+1)){
        fase(espera, m, n, disfrute, traslado, suma+espera[suma][sigma[i]-1] + disfrute[sigma[i]-1] + traslado[sigma[i]][j-1], nvisitados, sigma, i+1, 1,solucion);
        if(sizeSol < nvisitados){
            sizeSol = nvisitados;
            solucion = sigma;
        }

    }
    if((j+1)<(n+1))
        if(i==1){
            suma-=traslado[0][sigma[i]-1];
        }

        fase(espera, m, n, disfrute, traslado, suma, nvisitados, sigma, i, j+1,solucion);
    return nvisitados;



}


bool invalid(std::vector<int>vec){

    for(int i=1;i<17;i++){
        if(vec[i-1]==vec[i])
            return false;
    }
    return true;
}
