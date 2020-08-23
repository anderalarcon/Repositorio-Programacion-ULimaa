from abc import ABC,abstractmethod #para metodos abstractos poner siempre
from random import random

class EmpleadoAbs:
        __metaClass__=ABC#indicar que la clase empleado es abstracta
        def __init__(self,codigo=0,nombre="",sueldo=0):#igualar siempre
            self.codigoa=codigo
            self.nombrea=nombre
            self.sueldoa=sueldo
        
        def generar(self):
            self.codigoa=(int)(10+random()*(95))
            self.nombrea=(chr)((int)(65+random()*25))
            
            
        @abstractmethod
        def suelldo(self):
            pass
        
        
class EmpleadoTC(EmpleadoAbs):
    
        def __init__(self,naños=0): #igualar siempre
            super().__init__()#hace los 2
            self.años=naños
            EmpleadoAbs.generar(self)
            self.sueldoa=(int)(10+random()*(100))
        
        def sueldo(self):#solo para el xq se calcula diferente
            self.sueldoa=self.sueldoa+self.años*0.2*self.sueldoa
            return self.sueldoa
        
        
class EmpleadoTP(EmpleadoAbs):
    
        def __init__(self,nhoras=0,costoh=0): #igualar siempre
            super().__init__()#no necesita el self 
            self.nhorasa=nhoras
            self.costoha=costoh
            EmpleadoAbs.generar(self)
            
            
        def generarhoraycosto(self):
            self.nhorasa=(int)(10+random()*30)
            self.costoha=(int)(10+random()*50)
            
            
            
        def sueldo(self):#aca solo hay un sueldo
            self.sueldoa=self.nhorasa*self.costoha
            return self.sueldoa
            

class Departamento:
    def __init__(self,l):#va ser una lista
        self.lista=l
        
    def imprimir(self):
        for i in range(0,len(self.lista)):
            print("Sueldo  :",self.lista[i].sueldoa)
    
def main():
    lista=[]
    a=EmpleadoTC(10)
    print("Empleado TC")
    print("Codigo : ",a.codigoa,"- Nombre:",a.nombrea,"-Sueldo Fijo:",a.sueldo())
    a.sueldo()
    print("Sueldo + bono :",a.sueldoa)
    print("************************************************************************")
    
 
    b=EmpleadoTP()
    b.generarhoraycosto()
    b.sueldo()
    print("Empleado TP")
    print("Codigo : ",b.codigoa,"- Nombre:",b.nombrea,"-Sueldo Fijo:",b.sueldo())
    print("************************************************************************")
    print("Planilla de Sueldos ")
    lista.append(a)
    lista.append(b)
    q=Departamento(lista)
    q.imprimir()

    
    
if __name__=="__main__":
    main()
        