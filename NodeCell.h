#ifndef NODECELL_H
#define NODECELL_H
#include "Nodo.h"

typedef MainCell* ptrMainCell;/**Tipo definido de un puntero a un MainCell**/

class NodeCell
{
    public:
        NodeCell(ptrMainCell _ptrMainCell): mPtrCell(_ptrMainCell){/**Constructor que recibe un puntero a
                                                                un MainCell y lo almacena en el mPtrCell**/};
        virtual ~NodeCell();
/*     virtual cellValue getCellValue(){return mPtrCell->evalue;}/**La funcion evalue pertenece a la clase MainCell
                                                                por loo tanto esta funcion nos debe retornar el
                                                                cellValue de dicha celda**/
    protected:
    private:
        ptrMainCell mPtrCell;/**miembre dato de la clase que almacena un puntero a un MainCell**/
};

#endif // NODECELL_H
