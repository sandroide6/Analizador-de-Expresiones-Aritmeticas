#include <iostream>
#include "Arbol.h"
using namespace std;

#include <iostream>
#include "Arbol.h"
#include <string>

using namespace std;

bool Arbol::isANumber(){
    return this->isNumber;
}

void Arbol::setTypeNumber(bool type){
    this->isNumber = type;
}
