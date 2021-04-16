# Implementation of Linear solvers{#solverlist}
monolish switches between `MKL`, `NVIDIA` and `OSS` at build time (see [here](@ref call_lib)).

This chapter explains what libraries are called by matrix and vector operations.

## Implementation of Linear Solvers
LAPACK is a complete direct solver for dense matrices. monolish calls LAPACK for direct solver for dense matrices.

The direct solver for sparse matrices is implemented in paradiso/mumps/cuSOLVER. monolish calls these libraries. Currently, only MKL and cuSOLVER is implemented.

Iterative solver for sparse matrix is implemented in MKL and CUDA libraries. However, the sparse matrix storage formats implemented by these libraries are different.
monolish does not use these libraries.
monolish has and provides an iterative solver implementation for sparse matrices.

In the future, we plan to implement a switch to call these libraries.


## Implementation status (solving / preconditioning) {#solverstatus}

|                                                                          | Dense / MKL   | Dense / NVIDIA | Dense / OSS   | Sparse / MKL  | Sparse / NVIDIA | Sparse / OSS  | LinearOperator   / MKL | LinearOperator / NVIDIA | LinearOperator / OSS |
|--------------------------------------------------------------------------|---------------|----------------|---------------|---------------|-----------------|---------------|------------------------|-------------------------|----------------------|
| \@ref monolish::equation::LU   "LU"                                      | **Y** / N     | **Y** / N      | **Y** / N     | N / N         | N / N           | N / N         | N / N                  | N / N                   | N / N                |
| \@ref monolish::equation::QR   "QR"                                      | N / N         | N / N          | N / N         | N / N         | **Y** / N       | N / N         | N / N                  | N / N                   | N / N                |
| \@ref monolish::equation::Cholesky   "Cholesky"                          | **Y** / N     | N / N          | **Y** / N     | N / N         | **Y** / N       | N / N         | N / N                  | N / N                   | N / N                |
| \@ref monolish::equation::CG   "CG"                                      | **Y** / N     | **Y** / N      | **Y** / N     | **Y** / N     | **Y** / N       | **Y** / N     | N / N                  | N / N                   | N / N                |
| \@ref monolish::equation::BiCGSTAB   "BiCGSTAB"                          | **Y** / N     | **Y** / N      | **Y** / N     | **Y** / N     | **Y** / N       | **Y** / N     | N / N                  | N / N                   | N / N                |
| \@ref monolish::equation::Jacobi   "Jacobi"                              | **Y** / **Y** | **Y** / **Y**  | **Y** / **Y** | **Y** / **Y** | **Y** / **Y**   | **Y** / **Y** | N / N                  | N / N                   | N / N                |
| \@ref monolish::standard_eigen::LOBPCG   "LOBPCG (standard_eigen)"       | **Y** / N     | **Y** / N      | **Y** / N     | **Y** / N     | **Y** / N       | **Y** / N     | N / N                  | N / N                   | N / N                |
| \@ref monolish::standard_eigen::DC   "DC (standard_eigen)"               | **Y** / N     | **Y** / N      | **Y** / N     | N / N         | N / N           | N / N         | N / N                  | N / N                   | N / N                |
| \@ref monolish::generalized_eigen::LOBPCG   "LOBPCG (generalized_eigen)" | **Y** / N     | **Y** / N      | **Y** / N     | **Y** / N     | **Y** / N       | **Y** / N     | N / N                  | N / N                   | N / N                |
| \@ref monolish::generalized_eigen::DC   "DC (generalized_eigen)"         | **Y** / N     | **Y** / N      | **Y** / N     | N / N         | N / N           | N / N         | N / N                  | N / N                   | N / N                |

# what libraries are called by solvers

## Direct Solvers for for Dense matrix
| func     | MKL                                          | NVIDIA                    | OSS                                    |
|----------|----------------------------------------------|---------------------------|--------------------------------------- |
| LU       | MKL                                          | cuSOLVER                  | OpenBLAS+LAPACK                        |
| Cholesky | MKL                                          | not impl.*                | OpenBLAS+LAPACK                        |
| QR       | todo) not impl.->MKL                         | todo) not impl.->cuSOLVER | todo) not impl. -> OpenBLAS+LAPACK     |

- *) Cholesky is not impl. in cuSOLVER 11.1

## Direct Solvers for sparse matrix
| func     | MKL                            | NVIDIA           | OSS                             |
|----------|--------------------------------|------------------|-------------------------------- |
| LU       | todo) not impl.->MKL           | not impl.*       | todo) not impl. -> MUMPS        |
| Cholesky | todo) not impl.->MKL           | cuSOLVER         | todo) not impl. -> ????         |
| QR       | todo) not impl.->MKL           | cuSOLVER         | todo) not impl. -> ????         |

- *) sparse LU is not impl. in cuSOLVER 11.1

## Iterative solvers (only CRS now, We will support Dense)

| func     | MKL            | NVIDIA         | OSS            |
|----------|----------------|----------------|----------------|
| CG       | monolish       | monolish       | monolish       |
| BiCGSTAB | monolish       | monolish       | monolish       |
| Jacobi   | monolish       | monolish       | monolish       |

## Preconditioners of Sparse Linear solver

| func   | MKL            | NVIDIA   | OSS      |
|--------|----------------|----------|----------|
| Jacobi | monolish       | monolish | monolish |

# Standard Eigen Solvers

## For dense matrix

| func                     | MKL       | NVIDIA         | OSS             |
|--------------------------|-----------|----------------|-----------------|
| Devide and Conquer       | MKL       | cuSOLVER       | OpenBLAS+LAPACK |

## For sparse matrix

| func                     | MKL       | NVIDIA         | OSS             |
|--------------------------|-----------|----------------|-----------------|
| LOBPCG                   | monolish  | monolish       | monolish        |

# Generalized Eigen Solvers

## For dense matrix

| func                     | MKL       | NVIDIA         | OSS             |
|--------------------------|-----------|----------------|-----------------|
| Devide and Conquer       | MKL       | cuSOLVER       | OpenBLAS+LAPACK |


## For sparse matrix

| func                     | MKL       | NVIDIA         | OSS             |
|--------------------------|-----------|----------------|-----------------|
| LOBPCG                   | monolish  | monolish       | monolish        |