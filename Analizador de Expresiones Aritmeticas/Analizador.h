#pragma once
#include <iostream>
#include <string>
#include "Arbol.h"
using namespace std;

class Analizador{
  private:
  public:
    int evaluar(Arbol *raiz);
    string imprimir(Arbol *raiz);
    string imprimirTodo(Arbol *exp);
};