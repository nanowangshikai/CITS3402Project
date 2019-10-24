#include "mpi.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int rank,size;
    MPI_Comm comm;

//    int *matrix_slice;

    MPI_Init(&argc,&argv);
    comm= MPI_COMM_WORLD;
    MPI_Comm_rank(comm,&rank);
    MPI_Comm_size(comm,&size);

       printf("Hello World from thread %d of %d\n", rank, size);


}
