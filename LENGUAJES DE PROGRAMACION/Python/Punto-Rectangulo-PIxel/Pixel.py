from CPuntoR import Punto

class Pixel(Punto): # hereda todos los metodos de Punto
    def __init__(self,x,y,color):#EL PIXEL TAMBIEN TIENE X Y Y
        #Punto.__init__(self,x,y) # OBLIGATORIO EL SELF esto obligatorio busca al constructor de la clase Punt
        super().__init__(x,y)#una de estas 2 formas ACA NO NECESITA EL SELF
        self.color=color
    
    def imprimir(self):
        Punto.imprimir(self) #llamo a la funcion de la clase heredada
        print('El color es :',self.color) # lo adicional

