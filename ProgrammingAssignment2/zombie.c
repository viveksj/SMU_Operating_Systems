#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t cpid;
	/* fork a child process */
	cpid = fork();
	
	
	if (cpid < 0) 
	{
	 /* error occurred */
		fprintf(stderr, "Fork Failed");
	}
	else if (cpid == 0)
	{ /* child process */
			printf("\nchild\n");
	}
	else if(cpid>0) 
	{ /* parent process */
			/* parent will wait for the child to complete */
				sleep(4);
				printf("\nparent");
				printf("\nzombie");
				sleep(4);


				while(1){}
//If the above while is left uncommented, the loop will run forever and will need a kyboard interrup to stop.
//After the keyboard interrup, the zombie process will not be terminated and will have to then be manually terminated from the terminal kill command using its pid
				
	}

	return 0;
}
//Furthermore, I have attached 4 images named Q2Image1.png, Q2Image2.png, Q2Image3.png, Q2Image4.png to show how I executed it.