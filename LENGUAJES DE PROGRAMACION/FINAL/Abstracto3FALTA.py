from abc import ABC,abstractmethod #para metodos abstractos poner siempre
from random import random

class PoliticaDescuento:
    __metaClass__=ABC#indicar que la clase empleado es abstracta
    def __init__(self):
        
        pass
        
    @abstractmethod
    def calculaDescuento(self,cantidad,costo):
            pass
        

class DescuentoBloque(PoliticaDescuento):
    def __init__(self,minimo,porcentaje):
        super().__init__()
        self.minimoa=minimo
        self.porcentajea=porcentaje
        
        
    def calculaDescuento(self):
        pass
    
    
class CompreNArticulos(PoliticaDescuento):
    def __init__(self,n):
        super().__init__()
        self.n2=n
        
    def calculaDescuento(self):
        pass
    
    
class DescuentoCombinado(PoliticaDescuento):
    def __init__(self):
        
    
    
    
        
        