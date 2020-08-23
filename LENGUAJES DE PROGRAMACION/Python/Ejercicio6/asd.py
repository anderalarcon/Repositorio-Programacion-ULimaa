
class PilaDeEnteros:
    def __init__(self):
        self.lista=[]
        
    def agregar(self,n):
        self.lista.append(n)
        
    def imprimirnormal(self):
        print(self.lista)
    def imprimir(self):
       self.lista.reverse()
       print(self.lista)
        


def main():
    q=PilaDeEnteros()
    a=(int)(input("Ingrese un numero : "))
    for i in range(2,a):
        acu=2
        A=1
        while A==1 and acu<i:
            if (i%acu==0):
                A=2
            else:
                acu=acu+1
        if A==1:
            q.agregar(i)
    q.imprimirnormal()
    q.imprimir()
  
            
        
        
    
    
    
if __name__=="__main__":
    main()

