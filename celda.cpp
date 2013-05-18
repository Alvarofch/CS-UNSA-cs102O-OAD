#include "celda.h"
#include <iostream>
#include <cstring>
#include <cstdlib> // atoi()
using namespace std;
celda::celda()
{
    //ctor
}

celda::~celda()
{
    //dtor
}

bool celda::esLetra(C caracter)
{
    if(caracter>=97 && caracter<=122 ||
       caracter>=65 && caracter<=90)
        return true;
    return false;
}
bool celda::esNumero(C caracter)
{
    if(caracter>=49 && caracter<=57)
        return true;
    return false;
}
C celda::sacarLetra(pC cadena)
{
    C Nlet;
    E i=0;
    for(;i<strlen(cadena);++i)
    {
        if(esLetra(cadena[i]))
        {
            Nlet=cadena[i];
            return Nlet;
        }
        //cout<<"-"<<i<<"-"<<endl;

    }
}
E celda::sacarNumero(pC cadena)
{
    E Nnum;
    string Ncad;


    for(E i=0;i<strlen(cadena);++i)
    {
        if(esNumero(cadena[i]))
        {
            Ncad[i]=cadena[i];
            Ncad+=cadena[i];
        }
    }
    Nnum=atoi(Ncad.c_str());
    return Nnum;
}
