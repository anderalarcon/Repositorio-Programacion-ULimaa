#include <stdio.h>
#include <stdlib.h>




void desviacion(int n ){
for(int i =0;i<=n;i++){

}
}
int main()
{
    double a,b,c,d,e,f,g,h,i,j;
    printf("Ingresa 10 numeros ctmre:");
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    printf("La media es %lf:",(a+b+c+d+e+f+g+h+i+j)/10.0);
    printf("La d.e es : %lf", pow(((pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2)+pow(e,2)+pow(f,2)+pow(g,2)+pow(h,2)+pow(i,2)+pow(j,2))-(pow(a+b+c+d+e+f+g+h+i+j,2))/10)/(10-1),0.5));
    return 0;
}
