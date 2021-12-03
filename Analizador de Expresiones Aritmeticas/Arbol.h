#include <iostream>
#include <string>

#pragma once

using namespace std;

class Arbol{
  private:
    bool isNumber=false;
  public:
    bool isANumber();
    void setTypeNumber(bool);
};