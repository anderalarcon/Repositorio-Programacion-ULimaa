



class Curso:
    def __init__(self,nombre,codigo):
        self.nombre1=nombre
        self.codigo1=codigo

class Estudiante:
    def __init__(self,codigo,lista):
        self.codigo1=codigo
        self.lista1=lista
        
    def imprimir(self):
        print("Codigo Estudiante:",self.codigo1)
        for i in range(0,len(self.lista1)):
            print("NombreCurso:",self.lista1[i].nombre1," - CodigoCurso:",self.lista1[i].codigo1)
        
class Profesor:
    def __init__(self,listaCD,nombrep="",codigop=None):
        self.nombrep1=nombrep
        self.codigop1=codigop
        self.lista2=listaCD
    
    def imprimir(self):
        print("Nombre Profe:",self.nombrep1)
        print("Codigo Profe:",self.codigop1)
        for i in range(0,len(self.lista2)):
            print("Nombre Curso:",self.lista2[i].nombre1," - Codigo Curso",self.lista2[i].codigo1)
        



class Asistente(Estudiante,Profesor):
    def __init__(self,codigo,lm,la,bono,nombre):
        Estudiante.__init__(self,codigo,lm)
        Profesor.__init__(self,la,nombre)
        
        self.bono1=bono
        
    def imprimir(self):
        Estudiante.imprimir(self)
        Profesor.imprimir(self)
        print("El bono del asisten es :",self.bono1)
    

def main():
    a=Curso('Datos',1)
    b=Curso('LP',2)
    lc=[]
    lc.append(a)
    lc.append(b)
    
    b=Estudiante(20172991,lc)
    b.imprimir()
    print("******************\n")
    ld=[]
    c=Curso('Progra',3)
    ld.append(c)
    
    p=Profesor(ld,'Guty',10)
    p.imprimir()
    print("******************\n")

    z=Asistente(20172991,lc,ld,1000,'Anderson')
    z.imprimir()
    
if __name__=="__main__":
    main()