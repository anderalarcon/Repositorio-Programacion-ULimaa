from random import random
import math


class Punto:
    def __init__(self,x,y):
        self.x1=x
        self.y1=y
    def mostrar(self):
        print("X:",self.x1,"Y:",self.y1)
        
    def distancia(self,objeto):
        distancia1=self.x1-objeto.x1
        distancia2=self.y1-objeto.y1
        distancia3=math.sqrt(distancia1**2+distancia2**2)
        return distancia3
    

class Pixel(Punto):
    def __init__(self,x2,y2,color):
        super().__init__(x2,y2)
        self.color2=color
    
    def mostrar(self):
        Punto.mostrar(self)
        print("Color :",self.color2)
        
  
        pass
def main():
    a=Punto(1,2)
    b=Punto(3,4)
    print(a.distancia(b))
    print()
    print("-------------------------")
    
    c=Pixel(10,10,"Amarillo")
    d=Pixel(20,20,"Rojo")
    c.mostrar()
    d.mostrar()
    print(c.distancia(d))
    
    

if __name__=="__main__":
    main()     


