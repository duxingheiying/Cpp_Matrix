#ifndef ITERSOLVER_H
#define ITERSOLVER_H

#include "Matrix.h"
#include "Vector.h"

template <typename T>
class IterSolver
{
public:
    IterSolver(const Matrix<T>& A,const Matrix<T>& b);
    IterSolver(const Matrix<T>& A,const Vector<T>& b);




    const Matrix<T> JacobiSolver(const Vector<T>& x0);
    const Matrix<T> JacobiSolver();

private:
    Matrix<T> A;
    Matrix<T> b;

};


template <typename T>
IterSolver<T>::IterSolver(const Matrix<T> &A_input, const Matrix<T> &b_input)
        :A(A_input),b(b_input)
{

}


template <typename T>
IterSolver<T>::IterSolver(const Matrix<T>& A_input,const Vector<T>& b_input)
        :A(A_input)
{
    b = b_input;
}


template <typename T>
const Matrix<T> IterSolver<T>::JacobiSolver(const Vector<T>& x0)
{
    if(!A.isSquare())
    {
        throw runtime_error("A is not a square matrix");
    }

    if(x0.getNum() != A.GetNumRow())
    {
        throw runtime_error("The row number of A is not equal to the number of components of x0");
    }

    Matrix<T> D = A.GetDiagMatrix();
    Matrix<T> L = -A.GetLowTriMatrix(false);
    Matrix<T> U = -A.GetUpTriMatrix(false);

    //ToDo:迭代求解

}



#endif // ITERSOLVER_H
