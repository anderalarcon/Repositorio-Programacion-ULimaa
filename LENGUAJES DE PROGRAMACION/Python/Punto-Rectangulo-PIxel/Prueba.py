from CPuntoR import Punto
from CPuntoR import Rectangulo
from Pixel import Pixel

def main():
    
    print("--Punto--")
    P=Punto(1,2)
    P.imprimir()
    
    print("--Pixel--")
    r=Pixel(5,6,'Azul')
    r.imprimir()
    s=Pixel(8,15,'rojo')
    print(r.distancia(s))
if __name__=="__main__":
    main()


