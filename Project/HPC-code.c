/* And finally in need to declare an MPI status varable */
/* for checking the status of the MPI_Recv function: */
MPI_Status status ;
int rsend = 0;
for (proc=1; proc<size-1; proc++)
	{
	i=0;
	if (rank==0)
		{
		nrrpp1=(proc+1)*nrrpp;
		while (inrow <= nrrpp1)

			{
			rowsB [i]=inrow;
			colB[i]=incol;
			B[i]=inval;
			// printf("B: nzero=%d,    inrow=%d,    incol=%d,  inval=%lg\n", i
			fscan (f, "%d %d  %lg\n" , &inrow , &incol , &inval);
			};
		i--;
		// /*
		proc = size-1;
		MPI_Send(&i,1,MPI_INT,proc,tag,MPI_COMM_WORLD);
		MPI_Send(B,1,MPI_DOUBLE,proc,tag,MPI_COMM_WORLD);
		MPI_Send(rowsB,1,MPI_INT,proc,tag,MPI_COMM_WORLD);
		MPI_Send(colB,1,MPI_INT,proc,tag,MPI_COMM_WORLD);
		// */
		printf( "FINAL!!: processor %d has sent the message to %d with %d values.\n
		}
	else if (rank == size-1)
		{
		printf ("myrank=%d last receive" , rank);
		// /*
		MPI_Recv(&i,1,MPI_INT,0,tag,MPI_COMM_WORLD,&status);
		MPI_Recv(A,i,MPI_DOUBLE,0,tag,MPI_COMM_WORLD,&status);
		MPI_Recv(rowsA,i,MPI_INT,0,tag,MPI_COMM_WORLD,&status);
		MPI_Recv(colA,i,MPI_INT,0,tag,MPI_COMM_WORLD,&status)
		// */
		};

	printf ("process %d before final finalizing\n" , rank);
	MPI_FINALIZE();
	fclose(f);
	return  ();

}