#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    int i,j,a;
    a=0;
    i=10000;
    double r =0.0;
    while(a==0){
        for(j=1;j<=10000;j++){
            r=r+(pow(-1.0,j+1))/(2.0*j-1.0);
        }
        r=4.0*r;
        printf("El valor de pi para i igual a %d es %lf\n",i,r);
        r=0;
        a=1;
    }

}
