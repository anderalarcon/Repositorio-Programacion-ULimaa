from vector import Vector
from circulo import circulo
def main():

    a=Vector(1,2,3)
    b=Vector(4,5,6)
    a.sumar(b)
    print("Distancia Vectores:",a.calcularDistancia(b))
    
    c=circulo(a,2)
    d=circulo(b,4)
    print("Distancia circulos :",c.calcularDistanciaCentro(d))
if __name__=="__main__":
    main()