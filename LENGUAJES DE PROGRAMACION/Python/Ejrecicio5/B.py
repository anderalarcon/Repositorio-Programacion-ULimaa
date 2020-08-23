from A import Polinomio
from A import monomio

def main():
    
    a=monomio(3,"x",4)
    c=monomio(-2,"x",5)
    d=monomio(5,"x",-4) 
    
    b=Polinomio()
    b.agregar(a)
    b.agregar(c)
    b.agregar(d)
    b.imprimir()
   
    
if __name__=="__main__":
    main()

