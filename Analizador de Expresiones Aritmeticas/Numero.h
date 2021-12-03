#pragma once
#include <iostream>
#include "Arbol.h"
using namespace std;

class Numero : public Arbol{
      private:
        int valor;
      public:
        Numero(int valor);
        int getValor();
};