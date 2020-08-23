from random import random 
from Lista import ListaArreglo
from P import Pila

def main():
  
    p=Pila()
    for i in range(0,10):
        p.apilar((int)(random()*100))
    print(p.Lista)#lista es el padre
    print(p.contador)
    print(p.estaVacia())
    
    for j in range(0,10):
        p.desapilar()
        
    print(p.Lista)#lista es el padre
    print(p.contador)
    print(p.estaVacia())
  
if __name__=="__main__":
    main()