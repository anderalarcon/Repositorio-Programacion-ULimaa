#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    float xsig,a,b,e,s,xini;
     e=0.0001;
     s=125348;
     xini=600;
    a= (s-pow(xini,2))/(2*xini);
    b= xini + a;
    xsig = b - (pow(a,2))/(2*b);
    printf("%f\n %f\n %f\n",a,b,xsig);
    if(xsig-xini>e){
        printf("la raiz es %f\n",xsig);
    }
    else{
        xini=xsig;
        a= (s-pow(xini,2))/(2*xini);
        b= xini + a;
        xsig = b - (pow(a,2))/(2*b);
        printf("la raiz es %f\n",xsig);
        }
    return 0;
}
