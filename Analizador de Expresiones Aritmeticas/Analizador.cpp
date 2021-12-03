#include "Analizador.h"
#include "Arbol.h"
#include "Numero.h"
#include "Binario.h"

#include <iostream>
#include <string>

using namespace std;

int Analizador::evaluar(Arbol *raiz)
{
  int res = 0;

  if (raiz==NULL)
  {
    return res;
  }
  else
  {
    if (raiz->isANumber())
    {
      Numero *n = (Numero *)raiz;
      res = n->getValor();
      
    }
    else
    {
      Binario *operador = (Binario *)raiz;
      switch(operador->getOper()->toString()){
        case '+':
          res = evaluar(operador->getIzq()) + evaluar(operador->getDer());
          break;
        case '-':
           res = evaluar(operador->getIzq()) - evaluar(operador->getDer());
           break;
        case '*':
          res = evaluar(operador->getIzq()) * evaluar(operador->getDer());
          break;
        case '/':
          res = evaluar(operador->getIzq()) / evaluar(operador->getDer());
          break;
      }
    }
  }
  return res;
} 

string Analizador ::imprimir(Arbol *raiz)
{
  string ecuacion;
  if (raiz == NULL)
  {
    //no retorna nada
  }
  else
  {
    if (raiz->isANumber())//comprueba si el arbol es un numero
    {
      Numero *n = (Numero *)raiz;
      ecuacion = to_string(n->getValor());
    }
    else
    {
      Binario *operador = (Binario *)raiz;
      ecuacion = ecuacion + "(";
      ecuacion += imprimir(operador->getIzq());
      ecuacion += operador->getOper()->toString();
      ecuacion += imprimir(operador->getDer());
      ecuacion += ")";
    }
  }
  return ecuacion;
}

string Analizador::imprimirTodo(Arbol *exp)
{
  string retorno = imprimir(exp);
  retorno += "=";
  retorno += to_string (evaluar(exp));
  return retorno;
}