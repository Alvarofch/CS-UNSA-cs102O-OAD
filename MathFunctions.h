#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H
#include <math.h>
#include "Nodo.h"
#include <utility>
#include <map>

typedef cellValue(*mathFunction)(cellValue,cellValue);/**Definiendo un puntero a una función
                                                        llamado mathFunction**/
typedef pair<string,mathFunction> pairMathFunction;/**Definiendo un par que tiene como llave un string (representa
                                                    el caracter o string que representa una funcion matematica)
                                                    y el otro par Second es la dirección de una función**/

cellValue cellAddition(cellValue &A,cellValue &B){/**Codigo de las funciones**/};
cellValue cellSubstract(cellValue &A,cellValue &B){/**Codigo de las funciones**/};
cellValue cellMultiply(cellValue &A,cellValue &B){/**Codigo de las funciones**/};
cellValue cellDivision(cellValue &A,cellValue &B){/**Codigo de las funciones**/};
/**FUNCIONES MATEMATICAS POR AGREGAR ---**/

map<string,mathFunction> mapMathFunctions;
mapMathFunctions.insert(pairMathFuntion("+",&cellAddition));
mapMathFunctions.insert(pairMathFuntion("-",&cellSubstract));
mapMathFunctions.insert(pairMathFuntion("*",&cellMultiply));
mapMathFunctions.insert(pairMathFuntion("/",&cellDivision));
 /** **/
#endif//MATHFUNCTIONS_H
