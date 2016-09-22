#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fact(int a)
{
	if (a<0)	return -1;
	else if (a==1 || a==0)
		return 1;
	else return a*fact(a-1);
}

int main(int argc, char *argv[])
{
int num;

	 if( argc < 2 )
	  { //printf("Huh1?\n");
	  	printf("Huh?\n");

	  }
    else
    {   float num2;
        num2=atof(argv[1]);
        num=atoi(argv[1]);
        
        if ((num2 - num)==0)
        {
    
            if( atoi(argv[1]) > 12 )
            { //num=atoi(argv[1]);
              printf("Overflow.\n");
            }
           else if((( atoi(argv[1]) <= 12 )&&(atoi(argv[1]) >= 1)))
            {
              num=fact(atoi(argv[1]));
              printf("%d\n", num);
            }
            else
      
            {//printf("Huh2?\n");
              printf("Huh?\n");
              
            }
        }
        else
      
        { //printf("Huh3?\n");
        	printf("Huh?\n");
          
        }

    }
return 0;
}