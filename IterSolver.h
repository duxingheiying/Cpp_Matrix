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




    const Vector<T> JacobiSolver();

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
const Vector<T> IterSolver<T>::JacobiSolver()
{

}



#endif // ITERSOLVER_H
