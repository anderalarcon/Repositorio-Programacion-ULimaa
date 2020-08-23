#include <stdio.h>
#include <stdlib.h>
struct complejo{
float x,y;};
typedef struct complejo Complejo;
Complejo leer_complejo(){
Complejo z;
printf("Ingrese la parte real del complejo: ");
scanf("%f",&z.x);
printf("Ingrese la parte imaginaria del complejo: ");
scanf("%f",&z.y);
return z;}
void escribir_complejo(Complejo z){
printf (" (%.4f ,%.4f i)  \n",z.x,z.y);}
Complejo suma(Complejo z1,Complejo z2){
Complejo z;
z.x =z1.x + z2.x;
z.y =z1.y + z2.y;
return z;}
Complejo resta(Complejo z1,Complejo z2){
    Complejo z;
    z.x=z1.x-z2.x;
    z.y=z1.y-z2.y;
    return z;}
Complejo producto (Complejo z1, Complejo z2){
Complejo z;
z.x= (z1.x *z2.x) -( z1.y * z2.y);
z.y= (z1.x *z2.y) +( z1.y * z2.x);
return z;}
Complejo division (Complejo z1, Complejo z2){
Complejo z;
float den;
den = z2.x * z2.x + z2.y * z2.y;
z.x = ((z1.x * z2.x) + ( z1.y * z2.y))/den;
z.y = ((-z1.x * z2.y) + (z1.y * z2.x))/den;
return z;}
int main(){
Complejo z,z1,z2;
z1= leer_complejo();
z2= leer_complejo();
z= suma(z1,z2);
printf("El resultado de la suma es: ");
escribir_complejo(z);
z=producto (z1,z2);
printf("El resultado  del producto es: ");
escribir_complejo(z);
z=division(z1,z2);
printf("El resultado  de la division es: ");
escribir_complejo(z);
z=resta(z1,z2);
printf("El resultado de la resta es :");
escribir_complejo(z);
return 0;}
