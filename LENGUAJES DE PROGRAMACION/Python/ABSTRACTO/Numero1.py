from abc import ABC,abstractmethod #para metodos abstractos poner siempre
from random import random
#el metodo calcularsueldo va ser abstracto


class Empleado(ABC):
    __metaClass__=ABC#indicar que la clase empleado es abstracta
    
    def __init__(self,codigo=0,nombre="",sueldo=0):
        self.codigo=codigo
        self.nombre=nombre
        self.sueldo=sueldo
        
    def generar(self):
        min=65
        max=90
        self.codigo=(int)(min+random()*(max-min))
        self.nombre=(chr)((int)(65+random()*(max-min)))
    
    
    @abstractmethod
    def calcularSueldo(self):#Operaciones distintas para empleados
        pass
        
        
        
        
class EmpleadoTC(Empleado):
    def __init__(self,nA=0):
        super().__init__()
        self.nA=nA
        Empleado.generar(self)#puso la clase generar en el mismo constructor y defrente
        min=1000
        max=9000
        self.sueldo=(min+random()*(max-min))
    
    def calcularSueldo(self):  
        self.sueldo=self.nA*0.20*self.sueldo
        return self.sueldo
    
    
class EmpleadoTP(Empleado):
       def __init__(self,nrohoras=0,choras=0):
           super().__init__()
           self.nrohoras=nrohoras
           self.choras=choras
           Empleado.generar(self)
           minNH=10
           maxNH=160
           minCH=60
           maxCH=100
           self.nrohoras=(int)(minNH+random()*(maxNH-minNH))
           self.choras=(int)(minCH+random()*(maxCH-minCH))
           
       def calcularSueldo(self):
           self.sueldo=self.nrohoras*self.choras
           return self.sueldo
    
def main():
    obj1=EmpleadoTC(10)
    print("Empleado tiempo completo")
    print(obj1.codigo,"-",obj1.nombre,"-","Sueldo base :",obj1.sueldo)
    print("Sueldo con bono empleado Tiempo Completo :",obj1.calcularSueldo())
    print()
    obj2=EmpleadoTP()
    print("Empleado tiempo parcial")
    print(obj2.codigo,"-",obj2.nombre,"-",obj2.nrohoras,"-",obj2.choras)
    print("Sueldo :",obj2.calcularSueldo())
    
    
if __name__=="__main__":
    main()