#pragma once
#include <iostream>
#include "Arbol.h"
#include "Operador.h"
using namespace std;

class Binario : public Arbol{
     private:
     Operador *oper;
     Arbol *izq;
     Arbol *der;
     
     public:
     Binario(char oper, Arbol *izq, Arbol *der);
     Operador *getOper();
     Arbol *getIzq();
     Arbol *getDer();
};