from Q import abuelo
from W import Hijo
from E import Nieto
def main():
    a=abuelo("Adrian")
    b=Hijo("Mery",50)
    c=Nieto("Anderson",20,70)
    b.imprimir2()
    c.imprimir3()
    
    
    
if __name__=="__main__":
    main()


