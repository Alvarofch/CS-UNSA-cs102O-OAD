#ifndef NODO_H
#define NODO_H
#include <string>

#include "MainCell.h"


//typedef char C;

class Nodo
{
    public:
        Nodo();
        virtual ~Nodo();
        //Nodo* tree;
        /*Luis en esta parte no estoy seguro si reciba dos "nodoValue", as� que lo pongo comentado*/
        //virtual nodoValue eval(nodoValue,nodoValue)=0;//Funcion Virtual pura xD
        virtual cellValue getCellValue()=0;/*Funcion virtual pura que ser� reescrita en las clases hijas
                                             Lo �nico que devuelve es un cellValue, es decir un valor que va a representar
                                             a un mainCell*/


    protected:
    private:
        /**En est� parte tampoco estoy muy seguro de cuales sean sus miembros datos**/
        //string str;

};

#endif // NODO_H
