import math
class Vector:
    def __init__(self,x,y,z):
        self.x=x
        self.y=y
        self.z=z
    def sumar(self,vector):
        s1=self.x+vector.x
        s2=self.y+vector.y
        s3=self.z+vector.z
        print("Suma de posX :",s1)
        print("Suma de posY :",s2)
        print("Suma de posZ :",s3)
        
        
    def calcularDistancia(self,vector):
        d1=self.x-vector.x
        d2=self.y-vector.y
        d3=self.z-vector.z
        return math.sqrt(d1**2+d2**2+d3**2)
    
        
        