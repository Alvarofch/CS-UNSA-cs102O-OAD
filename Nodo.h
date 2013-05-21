#ifndef NODO_H
#define NODO_H
#include <string>

typedef double cellValue;

class Nodo
{
    public:
        Nodo();
        virtual ~Nodo();
        //Nodo* tree;
        /*Luis en esta parte no estoy seguro si reciba dos "nodoValue", así que lo pongo comentado*/
        //virtual nodoValue eval(nodoValue,nodoValue)=0;//Funcion Virtual pura xD
        virtual cellValue getCellValue()=0;/*Funcion virtual pura que será reescrita en las clases hijas
                                             Lo único que devuelve es un cellValue, es decir un valor que va a representar
                                             a un mainCell*/


    protected:
    private:
        /**En está parte tampoco estoy muy seguro de cuales sean sus miembros datos**/
        //string str;

};

#endif // NODO_H
