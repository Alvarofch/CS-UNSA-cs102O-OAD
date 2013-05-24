#ifndef MAINCELL_H
#define MAINCELL_H
#include "Nodo.h"
#include <vector>

class MainCell
{
    public:
        MainCell();
        virtual ~MainCell();
        cellValue evalue(){/**Aca va el codigo para obtener el valor que contiene una celda**/
                            //return mCellValue;
                            }
        //update();

    private:
        cellValue mCellValue; /**Miembro de un bojeto celda que guarda el valor que contiene dicha celda**/
        string strCellExpression;
        Nodo* ptrNodeExpression;
        vector <*MainCell> listDependentCell;

};

#endif // MAINCELL_H
