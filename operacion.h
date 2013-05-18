#ifndef OPERATION_H
#define OPERATION_H
#include "Nodo.h"

typedef Nodo* ptrNode;/**Tipo definido llamado ptrNode que es un puntero a un nodo o.O**/

class Operation
{
    public:
        Operation();
        virtual ~Operation();

    protected:
    private:
        ptrNode leftPtrNode;/**Puntero al nodo izquierdo**/
        ptrNode rightPtrNode;/**Puntero al nodo derecho**/

};

#endif // OPERATION_H
