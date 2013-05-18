#ifndef CELDA_H
#define CELDA_H
#include "Nodo.h"

class celda
{
    public:
        celda();
        virtual ~celda();
        bool esLetra(C);
        C sacarLetra(pC);
        bool esNumero(C);
        E sacarNumero(pC);
        //
        /*
        celda(int x=0,int y=0)
            :fila(x),columna(y){}//constructor
        int getFila() const{return fila;}
        void setFila(int x){fila=x;}
        int getColumna() const{return columna;}
        void setColumna(int y){columna=y;}
        */


    protected:
    private:
        pC nombre;
        C letra;
        pC simbolo;
        E numero;
        //int fila,columna;

};

#endif // CELDA_H
