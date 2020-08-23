class ListaPadre:
    def __init__(self):
        self.lista=[]
        self.contador=0
    def agregar(self,n):
        self.lista.append(n)
        self.contador=self.contador+1
    def borrar(self,pos):
        self.lista.pop(pos)
        self.contador=self.contador-1
    
