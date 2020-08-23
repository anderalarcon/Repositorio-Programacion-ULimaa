from Q import Monomio
class Polinomio:
    def __init__(self):
        self.lista=[]
    def agregar(self,mono):
        self.lista.append(mono)
        
    def imprimir(self):
        for i in range(0,len(self.lista)):
            print(self.lista[i].c,self.lista[i].x,"**",self.lista[i].n,"+",end="")
        
