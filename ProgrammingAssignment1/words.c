//©Vivek Sanghvi Jain
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{ 
	int i=0;
	
			//printf("\n\n-------\n%s\n------\n\n",argv[1]);
			//printf("\n\n-------\n%d\n------\n\n",argc);
		

	for (i=1;i<argc;i++)
	{printf("%s",argv[i]);
	printf("\n");
	}
	   


	return 0;
}