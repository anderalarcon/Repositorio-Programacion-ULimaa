

class ListaArreglo:
    
    def __init__(self):
        self.Lista=[]
        self.contador=0 #nos servira para el vacio
        
    def agregarElemento(self,n):
        self.Lista.append(n)
        self.contador=self.contador+1
        
    def borrarElemento(self,posicion):
        self.Lista.pop(posicion)
        self.contador=self.contador-1
    

