from Lista import ListaArreglo
class Pila(ListaArreglo):# meter el nombre de la claes
    def __init__(self):
     super().__init__()
     
    def apilar(self,n):
       ListaArreglo.agregarElemento(self,n)
       
    
        
    def estaVacia(self):
        if self.contador==0: # se puede utilizar los atributos del padre llamando asi
            return True
        else:
            return False
        
    def desapilar(self):
        if (self.estaVacia()):        
            print("La pila esta vacia no se puede borrar algo")
        else:
            ListaArreglo.borrarElemento(self,self.contador-1)#el de si mismo y el contador
        
        
        
        