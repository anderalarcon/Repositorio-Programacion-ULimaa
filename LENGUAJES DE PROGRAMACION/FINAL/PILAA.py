

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



class Pila(ListaArreglo):
    
    def __init__(self):
        super().__init__()
        
    def apilar(self,w):
        ListaArreglo.agregar(self,w )
        
    def esvacia(self):
        if self.contador==0:
            return True
        else:
            return False
        
    def desapilar(self):
        if (self.esvacia()):
            print("No se puede desapialr porque no hay nada")
        else:
            ListaArreglo.borrar(self, self.contador-1)
            
    def imprimir(self):
        for i in range(0,len(self.a)):
            print(self.a[i])
        
 
        
def main():
    a=Pila()
    
    for i in range(0,10):
        a.apilar(i)
        
    a.imprimir()
    print(a.esvacia())
    
    
    
    for i in range(0,10):
        a.desapilar()
    a.imprimir()
    print(a.esvacia())
    
    
    
if __name__=="__main__":
    main()