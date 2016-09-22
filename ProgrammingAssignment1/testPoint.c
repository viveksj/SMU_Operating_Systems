//©Vivek Sanghvi Jain
//Compile the file with the command: gcc -o tp testPoint.c point.c -lm
//Then execute the tp
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "point.h"

int main(int argc, char **argv)
{
  Point p1;
  Point *p2 = malloc(sizeof(Point));
  assert(p2);
  double distance;
  
  point_set(&p1, 1.0, 1.0);
  point_set(p2, 1.0, 1.0);
  
  distance = point_distance(&p1, p2);
    //printf("\n%e\n",distance);
  point_translate(&p1, 1.0, 0.0);
  
  distance = point_distance(&p1, p2);
  //printf("\n%e\n",distance);
  point_set(&p1, 0.0, 0.0);
  point_set(p2, 3.0, 4.0);
  
  distance = point_distance(&p1, p2);
  
  printf("%e",distance);

  free(p2);
  p2 = NULL;

  printf("\nOK\n");
  return 0;
 }

