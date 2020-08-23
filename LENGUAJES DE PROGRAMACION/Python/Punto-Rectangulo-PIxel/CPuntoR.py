import math
class Punto:
    def __init__(self,x=0,y=0):
        self.x=x
        self.y=y
        
    def getX(self):
        return self.x
    def getY(self):
        return self.y
        
    def setX(self,nuevox):
        self.x=nuevox
    def setY(self,nuevoy):
        self.y=nuevoy
    def imprimir(self):
        print("X=",self.x)
        print("Y=",self.y)
    def distancia(self,Otropunto):
        d1=self.x-Otropunto.x
        d2=self.y-Otropunto.y
        return math.sqrt(d1**2+d2**2) 
    def distorigen(self):
        return math.sqrt(self.x**2+self.y**2)
    

class Rectangulo:
    def __init__(self,x=0,y=0):
        self.__x=1
        self.__y=2
    
    def getX(self): 
        return self.__x
    def getY(self):
        return self.__y
    def setX(self,nuevox):
        self.__x=nuevox
    def setY(self,nuevoy):
        self.__y=nuevoy
    def area(self):
        return self.__x*self.__y
    def perimetro(self):
        return self.__x*2+self.__y*2
    def imprimir1(self):
        print("X=",self.x)
        print("Y=",self.y)
        
        

        


