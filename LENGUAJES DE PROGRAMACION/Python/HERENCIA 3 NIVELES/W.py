from Q import abuelo
class Hijo(abuelo):
    def __init__(self,nombre,edad):
        super().__init__(nombre)
        self.edad=edad
    def imprimir2(self):
        abuelo.imprimir(self)
        print(self.edad)
 
