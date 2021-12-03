#include "Prueba.h"
#include "Arbol.h"
#include "Numero.h"
#include "Binario.h"
#include "Analizador.h"
#include <iostream>
#include <string>

using namespace std;

void Prueba::expresion01()
{
  Arbol *expresion[] = {
      new Binario('*',
        new Binario('+',
              new Numero(7),
                new Numero(6)),
                  new Numero(9))};

  Analizador *calculadora = new Analizador();

  cout << calculadora->imprimirTodo(expresion[0]) << endl;
};