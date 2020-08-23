from vector import Vector
class circulo(Vector):
    def __init__(self,vector,radio):
        super().__init__(vector.x,vector.y,vector.z)
        self.radio=radio
    
    def calcularDistanciaCentro(self,circulo):
        return Vector.calcularDistancia(self,circulo)