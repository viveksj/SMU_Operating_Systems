//©Vivek Sanghvi Jain
//Fall 2016
//OS ASsignment 2 Q1

#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc, char *argv[ ]) 
{
	int n,i;



	if (argc == 2)
	{
		n = atoi(argv[1]);
	}
	else n=5;

	pid_t Tick_ID = getpid();

	printf("%d; START \n",Tick_ID);
	

	for(i=0;i<n;i++)
	{

	Tick_ID = getpid();


	printf("%d; TICK ",Tick_ID);
	printf(" %d \n",(i+1));
	sleep(1);


	}
	
	return 0;
}





//The program always has the same process id.
//The state transfers from Ready to running when assigning the time slot for each sleep instruction to be 1 second, post which process transfers to the Ready state
