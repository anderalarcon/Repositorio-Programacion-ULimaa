from abc import ABC,abstractmethod #para metodos abstractos poner siempre
from random import random
#el metodo calcularsueldo va ser abstracto

class Empleado:
        __metaClass__=ABC#indicar que la clase empleado es abstracta
        def __init__(self,nombre,codigo,sueldo=0):
            self.nombre1=nombre
            self.codigo1=codigo
            self.sueldo1=sueldo
            
        def generar(self):
            self.nombre1=(chr)((int)(65+random()*25))
            self.codigo1=(int)(10+random()*100)
            self.sueldo1=(int)(10000+random()*100)

        def mostrar(self):
            print("Nombre:",self.nombre1)
            print("Codigo:",self.codigo1)
            print("sueldo:",self.sueldo1)
            
        @abstractmethod
        def calcularSueldo(self):
            pass
            

            
            
class EmpleadoTP(Empleado):
        def __init__(self,nombre2="",codigo2=0,sueldo2=0,nh=0,ch=0):
            Empleado.__init__(self,nombre2,codigo2)
            self.nh1=nh
            self.ch1=ch
            
        def generar(self):
            Empleado.generar(self)
            self.nh1=(int)(10+random()*30)
            self.ch1=(int)(20+random()*30)

        def calcularSueldo(self):
            self.sueldo1=self.nh1*self.ch1            
            
        def mostrar(self):
            Empleado.mostrar(self)
            print("Nro horas :",self.nh1)
            print("Costo x hora",self.ch1)
            
            
class EmpleadoTC(Empleado):
        def __init__(self,nombre3="",codigo3=0,sueldo3=0,añot=0):
            Empleado.__init__(self,nombre3,codigo3,sueldo3)
            self.añot1=añot
        def generar(self):
            Empleado.generar(self)
            self.añot1=(int)(10+random()*20)
            
        def mostrar(self):
            Empleado.mostrar(self)
            print("Nro de años :",self.añot1)
            
        def calcularSueldo(self):
            self.sueldo1=self.sueldo1+0.2*self.añot1*self.sueldo1
            
            
            
            
def main():
    
    a=EmpleadoTP()
    a.generar()
    a.calcularSueldo()
    a.mostrar()
    
    print("*********************************************")
    b=EmpleadoTC()
    b.generar()
    print("Sueldo Fijo:",b.sueldo1)
    b.calcularSueldo()
    b.mostrar()
    
if __name__=="__main__":
    main()