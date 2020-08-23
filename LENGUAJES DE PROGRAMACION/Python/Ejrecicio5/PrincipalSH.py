from Q import Monomio
from W import Polinomio

def main():
    ob1=Monomio(3,"x",4)
    obj2=Monomio(-2,"x",5)
    obj3=Monomio(5,"x",-4) 
    p=Polinomio()
    p.agregar(ob1)
    p.agregar(obj2)
    p.agregar(obj3) 
    p.imprimir()
    
    
if __name__=="__main__":
    main()

