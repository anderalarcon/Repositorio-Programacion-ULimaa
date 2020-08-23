class A:
    def __init__(self):
        self.a=1
    def imprimir(self):
        print("clase A ",self.a)
        
class B:
    def __init__(self):
        self.b=1
    def imprimir(self):
        print("Clase b ",self.b)

class C(A,B):
    def __init__(self):
        A.__init__(self)
        B.__init__(self)
        self.c=3
    def imprimir(self):
        A.imprimir(self)
        B.imprimir(self)
        print("clase c ",self.c)

def main():

    c=C()
    c.imprimir()
    
    
    
if __name__=="__main__":
    main()