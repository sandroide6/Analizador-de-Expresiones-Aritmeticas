#include <iostream>
#include "Binario.h"
#include "Arbol.h"
#include "Operador.h"
#include "Operador.h"
using namespace std;

Binario::Binario(char oper, Arbol *izq, Arbol *der){
  this->oper= new Operador(oper);
  this->izq= izq;
  this->der= der;
}

Operador* Binario::getOper(){
  return oper;
}

Arbol* Binario::getIzq(){
  return izq;
}

Arbol* Binario::getDer(){
  return der;
}