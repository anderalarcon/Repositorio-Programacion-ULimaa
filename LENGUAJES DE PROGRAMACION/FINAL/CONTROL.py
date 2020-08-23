from random import random

class Persona:
    def __init__(self,tipoA="",tiempoA=0):
        self.q=tipoA
        self.w=tiempoA
        
    def generar(self):
        self.q=(int)(0+random()*2)
        self.w=(int)(5+random()*(10))


#----------------------------------------------------
class ListaArreglo:
    def __init__(self):
        self.a=[]
        self.contador=0
        
    def agregar(self,p):
        if p.q==1:
            self.a.reverse()
            self.a.append(p)
            self.a.reverse()
        else:
            self.a.append(p)
            
    def agregar2(self,n):
        self.a.append(n)
        self.contador=self.contador+1
        
    def borrar(self,pos):
        self.a.pop(pos)
        self.contador=self.contador-1


#----------------------------------------------------



class cola(ListaArreglo):
    def __init__(self):
        super().__init__()
    def encolar(self,n):
        ListaArreglo.agregar2(self,n)
    def desencolar(self):
        if self.esvacia():
            print("La cola estavacia no se puede eliminar ")
        else: 
            ListaArreglo.borrar(self, 0)
        
    def esvacia(self):
        if self.contador==0:
            return True
        else:
            return False 
        
    def imprimir(self):
        for i in range(0,len(self.a)):
            print("(",self.a[i].q,"",self.a[i].w,")",end="")
         
  #----------------------------------------------------          
            
                    
class colaEspecial(cola):
    def __init__(self):
        super().__init__()
    
    def encolar2(self,p):
        ListaArreglo.agregar(self, p)
    def desencolar2(self):
        ListaArreglo.borrar(self, 0)
        
    
        
                 

      
def main():
    
  p=Persona()
  p1=Persona()
  p2=Persona()
  
  p.generar()
  p1.generar()
  p2.generar()
  
  a=colaEspecial()
  b=cola()
  print("Cola normalita")
  b.encolar(p)
  b.encolar(p1)
  b.encolar(p2)
  b.imprimir()
  print()
  print("Cola especial")
  a.encolar2(p)
  a.encolar2(p1)
  a.encolar2(p2)
  a.imprimir()
  

  #0 normal
  #1 especial
  
 
  
  

    
    
if __name__=="__main__":
    main()


