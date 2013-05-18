#ifndef CONSTANT_H
#define CONSTANT_H
#include "Nodo.h"

class Constant
{
    public:
        Constant();
        virtual ~Constant();
        cellValue getCellValue(){return constNumber;}/**Funcion redefinida que solo retorna el miembro dato constNumber
                                                        que quede claro que lo que retornamos es un cellValue**/
    protected:
    private:
        cellValue constNumber;//miembro dato que forma parte de un nodo que solo es un numero constante

};

#endif // CONSTANT_H
