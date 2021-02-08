C=const

echo "
#pragma once
#include \"../common/monolish_common.hpp\"
#include <stdio.h>
#include <vector>

#if defined USE_MPI
#include <mpi.h>
#endif

namespace monolish {
/**
* @brief
* Basic Linear Algebra Subprograms for Dense Matrix, Sparse Matrix, Vector and
* Scalar
*/
namespace blas {
"


## copy Dense
echo "
/**
* @brief Dense matrix copy (C=A)
* @param A monolish Dense matrix (size M x N)
* @param C monolish Dense matrix (size M x N)
* @note
* - # of computation: M x N
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  echo "void copy(const matrix::Dense<$prec> &A, matrix::Dense<$prec> &C);"
done

echo ""

## copy LinearOperator
echo "
/**
* @brief LinearOperator copy (C=A)
* @param A monolish LinearOperator (size M x N)
* @param C monolish LinearOperator (size M x N)
* @note
* - # of computation: M x N
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  echo "void copy(const matrix::LinearOperator<$prec> &A, matrix::LinearOperator<$prec> &C);"
done

echo ""

## copy CRS
echo "
/**
* @brief CRS matrix copy (y=a)
* @param A monolish CRS matrix (size M x N)
* @param C monolish CRS matrix (size M x N)
* @note
* - # of computation: M x N
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
* @warning
* A and C must be same non-zero structure
*/ "
for prec in double float; do
  echo "void copy(const matrix::CRS<$prec> &A, matrix::CRS<$prec> &C);"
done

echo ""

##############################################

#mscal Dense
echo "
/**
* @brief Densematrix scal: A = alpha * A
* @param alpha scalar value
* @param A Dense matrix (size M x N)
* @note
* - # of computation: MN
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  echo "void mscal(const $prec alpha, matrix::Dense<$prec> &A);"
done

echo ""

#mscal CRS
echo "
/**
* @brief CRS matrix scal: A = alpha * A
* @param alpha scalar value
* @param A CRS matrix (size M x N)
* @note
* - # of computation: MN
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  echo "void mscal(const $prec alpha, matrix::CRS<$prec> &A);"
done

echo ""
##############################################

#matadd Dense
echo "
/**
* @brief Dense matrix addition: C = A + B
* @param A Dense matrix (size M x N)
* @param B Dense matrix (size M x N)
* @param C Dense matrix (size M x N)
* @note
* - # of computation: MN
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  echo "void matadd(const matrix::Dense<$prec> &A, const matrix::Dense<$prec> &B, matrix::Dense<$prec> &C);"
done

#matadd LinearOperator
echo "
/**
* @brief LinearOperator addition: C = A + B
* @param A LinearOperator (size M x N)
* @param B LinearOperator (size M x N)
* @param C LinearOperator (size M x N)
* @note
* - # of computation: 2 functions
* - Multi-threading: false
* - GPU acceleration: false
*/ "
for prec in double float; do
  echo "void matadd(const matrix::LinearOperator<$prec> &A, const matrix::LinearOperator<$prec> &B, matrix::LinearOperator<$prec> &C);"
done

#matadd CRS
echo "
/**
* @brief CRS matrix addition: C = A + B (A and B must be
* same non-zero structure)
* @param A CRS matrix (size M x N)
* @param B CRS matrix (size M x N)
* @param C CRS matrix (size M x N)
* @note
* - # of computation: nnz
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
* @warning
* A and B must be same non-zero structure
*/ "
for prec in double float; do
  echo "void matadd(const matrix::CRS<$prec> &A, const matrix::CRS<$prec> &B, matrix::CRS<$prec> &C);"
done

echo ""

#matsub Dense
echo "
/**
* @brief Dense matrix subtract: C = A - B
* @param A Dense matrix (size M x N)
* @param B Dense matrix (size M x N)
* @param C Dense matrix (size M x N)
* @note
* - # of computation: MN
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  echo "void matsub(const matrix::Dense<$prec> &A, const matrix::Dense<$prec> &B, matrix::Dense<$prec> &C);"
done

#matsub LinearOperator
echo "
/**
* @brief LinearOperator subtract: C = A - B
* @param A LinearOperator (size M x N)
* @param B LinearOperator (size M x N)
* @param C LinearOperator (size M x N)
* @note
* - # of computation: 2 functions
* - Multi-threading: false
* - GPU acceleration: false
*/ "
for prec in double float; do
  echo "void matsub(const matrix::LinearOperator<$prec> &A, const matrix::LinearOperator<$prec> &B, matrix::LinearOperator<$prec> &C);"
done

#matsub CRS
echo "
/**
* @brief CRS matrix subtract: C = A - B (A and B must be
* same non-zero structure)
* @param A CRS matrix (size M x N)
* @param B CRS matrix (size M x N)
* @param C CRS matrix (size M x N)
* @note
* - # of computation: nnz
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
* @warning
* A B must be same non-zero structure
*/ "
for prec in double float; do
  echo "void matsub(const matrix::CRS<$prec> &A, const matrix::CRS<$prec> &B, matrix::CRS<$prec> &C);"
done

#################################
echo ""

#matsub Dense
echo "
/**
* @brief Dense matrix multiplication: C = AB
* @param A Dense matrix (size M x K)
* @param B Dense matrix (size K x N)
* @param C Dense matrix (size M x N)
* @note
* - # of computation: 2MNK
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  echo "void matmul(const matrix::Dense<$prec> &A, const matrix::Dense<$prec> &B, matrix::Dense<$prec> &C);"
done

#matsub LinearOperator
echo "
/**
* @brief LinearOperator multiplication: C = AB
* @param A LinearOperator (size M x K)
* @param B LinearOperator (size K x N)
* @param C LinearOperator (size M x N)
* @note
* - # of computation: 2 functions
* - Multi-threading: false
* - GPU acceleration: false
*/ "
for prec in double float; do
  echo "void matmul(const matrix::LinearOperator<$prec> &A, const matrix::LinearOperator<$prec> &B, matrix::LinearOperator<$prec> &C);"
done

#matsub CRS
echo "
/**
* @brief CRS and Dense matrix multiplication: C = AB
* @param A CRS matrix (size M x K)
* @param B Dense matrix (size K x N)
* @param C Dense matrix (size M x N)
* @note
* - # of computation: 2*N*nnz
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  echo "void matmul(const matrix::CRS<$prec> &A, const matrix::Dense<$prec> &B, matrix::Dense<$prec> &C);"
done


echo "
} // namespace blas
} // namespace monolish
"
