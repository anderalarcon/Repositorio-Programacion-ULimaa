# -*- coding: utf-8 -*-
"""
Created on Wed Jun 17 11:39:24 2020

@author: ander
"""
from Empleado import Empleado
from ListaEmpleado import ListaEmpleado

def main():
    l=ListaEmpleado()
    for i in range (0,10):
        objE=Empleado()#chanco el objeto
        objE.generar()  # genero sus datos
        l.agregar(objE) # los agrego a la lista para no perderlo
      
     
    l.imprimir()
    print()
    l.incremento() 
    
if __name__=="__main__":
    main()