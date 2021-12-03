#include <iostream>
#include "Numero.h"
using namespace std;

Numero::Numero(int valor){
  this->valor = valor;
  setTypeNumber(true);
}

int Numero::getValor(){
  return this->valor;
}
