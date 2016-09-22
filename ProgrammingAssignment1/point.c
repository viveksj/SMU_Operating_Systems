//©Vivek Sanghvi Jain
//Compile the file with the command: gcc -o tp testPoint.c point.c -lm
#include <assert.h>
#include <stdio.h>
#include "point.h"
#include <math.h>

/*
 * Update *p by increasing p->x by x and 
 * p->y by y
 */
void point_translate(Point *p, double x, double y)
{
  //printf("Your job is to implement translate\n");
  (*p).x=x;
  (*p).y=y;
}

/*
 * Return the distance from p1 to p2
 */
double point_distance(const Point *p1, const Point *p2)
{
  //printf("Your job is to implement distance\n");
  double x=((*p1).x)-((*p2).x);
  double y=((*p1).y)-((*p2).y);
  return sqrt((x)*(x)+(y)*(y));

}
