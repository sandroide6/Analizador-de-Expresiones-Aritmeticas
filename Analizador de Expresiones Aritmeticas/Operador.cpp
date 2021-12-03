#include <iostream>
#include "Operador.h"
using namespace std;

Operador::Operador(char oper){
this->oper = oper;
}

char Operador::toString(){
 return this->oper;
}
