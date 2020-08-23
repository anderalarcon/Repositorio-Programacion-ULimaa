#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,r1,r2,discri;
    printf("Ingresa los valores : ");
    scanf("%lf  %lf  %lf", &a ,&b, &c);
    discri=pow(b,2)-4*a*c;
    r1=(-b+pow(pow(b,2)-4*a*c,0.5))/(2*a);
    r2=(-b-pow(pow(b,2)-4*a*c,0.5))/(2*a);

    if (discri>0){
        printf("1ra raiz : %lf / 2da raiz : %lf",r1,r2);
    }else if (discri==0){
        printf("Raiz : %lf",r1);
        }
        else
            printf("No tiene raices");
    return 0;
}
