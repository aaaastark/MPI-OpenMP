#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char** argv){
 int myid, numprocs;
 
 MPI_Init(&argc, &argv);
 MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
 MPI_Comm_rank(MPI_COMM_WORLD, &myid);
 
 // Output my rank
 
 cout<<"Muhammad Allah Rakha"<<myid<<endl;
 MPI_Finalize();
}
