
class ListaArreglo:
    def __init__(self):
        self.a=[]
        self.contador=0
    def agregar(self,n):
        self.a.append(n)
        self.contador=self.contador+1
    def borrar(self,pos):
        self.a.pop(pos)
        self.contador=self.contador-1

class cola(ListaArreglo):
    def __init__(self):
        super().__init__()
    def encolar(self,n):
        ListaArreglo.agregar(self,n)
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
            print(self.a[i],"",end="")
      
def main():
  a=cola()
  for i in range(0,10):
      a.encolar(i)
  a.imprimir()
  
  for i in range(0,10):
      a.desencolar()
  a.imprimir()
  

    
    
if __name__=="__main__":
    main()
