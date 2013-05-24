#ifndef MATRIX_H
#define MATRIX_H
#include "MainCell.h"

template <typename T>

//Punteros a una clase IUpdate(no olvidar crear)
//Crear una clase visualizadorMatrix

class Matrix
{
    private:
        typedef vector <T> rowType;
        vector <rowType> mMatrix;
    public:
        Matrix();
        virtual ~Matrix();
        //void insert();
        void set(size_t row,size_t col,T value){/** verificar tamaño
                                                insertar un valor
                                                actualizar**/};
        T get(size_t row,size_t col);//revisar c++11
        void resizeHor(size_t nCols);
        void resizeVer(size_t nRows);
};

#endif // MATRIX_H
