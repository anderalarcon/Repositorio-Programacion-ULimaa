from cola import Cola
from random import random
def main():
    a=Cola()
    for i in range(0,10):    
        a.encolar((int)(1+random()*20))
    a.imprimir()    
    a.desencolar()
    a.imprimir()

if __name__=="__main__":
    main()
    
 