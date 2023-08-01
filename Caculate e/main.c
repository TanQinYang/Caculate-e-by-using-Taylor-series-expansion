#include <stdio.h>
#include <stdlib.h>

int main()
{
double c,i,e;
e=0;
c=1;
for(i=1;i<=100;i++)
{
    e=e+1/c;
    c=c*i;

}
printf("%.20lf",e);
    return 0;
}
