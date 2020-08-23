class monomio:
    def __init__(self,c=0,x="",n=0):
        self.c=c
        self.x=x
        self.n=n
              
        
        
        
class Polinomio(monomio):
    def __init__(self):
        self.lista=[]
        
    def agregar(self,monomio):
        self.lista.append(monomio)#sin self se refiere a una clase
                                  #se puedo almacenar un objeto entero 
                                  #luego puedo sacarlo por objeto su atributo

     
        
    def imprimir(self):
        for i in range(0,len(self.lista)):
            print(self.lista[i].c,self.lista[i].x,"**",self.lista[i].n ," + ",end=" ")
        
        
