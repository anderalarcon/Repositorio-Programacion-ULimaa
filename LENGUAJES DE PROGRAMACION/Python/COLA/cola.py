from D import ListaPadre

class Cola(ListaPadre):
    def __init__(self):
        super().__init__()
    def encolar(self,n):
        ListaPadre.agregar(self,n)
    def desencolar(self):
        ListaPadre.borrar(self,0)
    def imprimir(self):
        print(self.lista)
        

