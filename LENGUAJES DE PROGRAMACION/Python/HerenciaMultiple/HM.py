
class Estudiante:
    def __init__(self,codigo,listaCurso):
        self.codigo=codigo
        self.listaCurso=listaCurso
    def imprimir(self):
        print("El codido del alumno  es :",self.codigo)
        for i in range(0,len(self.listaCurso)):    
            print("Codigo Curso-Nombre Curso :",self.listaCurso[i].codigoC,self.listaCurso[i].nombreC)
         
     
        
class cursos:
    def __init__(self,codigoC,nombreC):
        self.codigoC=codigoC
        self.nombreC=nombreC
      
        
      
class profesor:
    def __init__(self,sueldo,listacurso,codigoP=None):
        self.codigoP=codigoP
        self.listacurso=listacurso
        self.sueldo=sueldo
    
    def imprimir2(self):
        print("El codigo del profe es : ",self.codigoP)
        print("El sueldo del profe es :",self.sueldo)
        for i in range(0,len(self.listacurso)):
            print("El codigo del curso que dicta el profe es :",self.listacurso[i].codigoC)
            print("El nombre del curso que dicta el profe es  :",self.listacurso[i].nombreC)
           


        
        
        
class Asistente(Estudiante,profesor):
    def __init__(self,codigoAsist,listaM,listD,bono):
        Estudiante.__init__(self,codigoAsist,listaM)#mandamos a la clase estudainte en orden
        profesor.__init__(self,bono,listD)#mandamos a la clase profesor respetar orden 
        
    def imprimir3(self):
        print("Asistente")
        Estudiante.imprimir(self)
        profesor.imprimir2(self)
        
        
def main():
    l=[]
    z=cursos(1,"LP")
    x=cursos(2,"POO")
    v=cursos(3,"Pro")
    l.append(z)
    l.append(x)
    l.append(v)
    
    
    a=Estudiante(20172991,l)
    a.imprimir()
    print()

    lp=[]
    lp.append(x)
    lp.append(v)
    b=profesor(10,lp,1000)
    b.imprimir2()
    print()
    
    t=Asistente(123,l,lp,5000)#sigue la estructura del constructor
    t.imprimir3()

if __name__=="__main__":
    main()