#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double f(int x,int y);
int main()
{double sum=0;
  for (int i=(-10);i<=10;i++)
       {sum+=((f(i,i+1))/(5+ f(2*i,i)));}
printf("The result is %f\n",sum);
    return 0;}

double f(int x,int y)
{double z=0,p;
srand(time(NULL));
if(x<=y)
    z=(rand()%(y-x+1))+x;
else
    z=(rand()%(x-y+1))+y;
p=sqrt(pow(abs(x-y),1/3)+pow((y-z),2));
return p;}
