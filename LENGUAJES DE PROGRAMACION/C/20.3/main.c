#include <stdio.h>
#include <stdlib.h>


int gcd(int m , int n ){
    if(m%n==0){
        return n;
    }else{
    return gcd(n,m%n);
    }
}
int main()
{
    int a,b,c;
    printf("Ingrese m :");
    scanf("%d",&a);
    printf("Ingrese n :");
    scanf("%d",&b);
    c=gcd(a,b);
    printf("El gcd es :%d",c);

    return 0;
}
