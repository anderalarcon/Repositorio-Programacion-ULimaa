# -*- coding: utf-8 -*-
"""
Created on Wed Jun 17 11:33:28 2020

@author: ander
"""
from Empleado import Empleado
class ListaEmpleado:
    def __init__(self): #constructor
            self.listaEmp=[]
            
    def agregar(self,objEmp):
        self.listaEmp.append(objEmp)
        
    def imprimir(self):
        for i in  range(0,(len(self.listaEmp))):
            print("El codigo es :",self.listaEmp[i].codigo)
            print("La primera letra del nombre es :",self.listaEmp[i].nombre)
            print("El salario es :",self.listaEmp[i].salario)
            print()

    def incremento(self):
        for i in  range(0,(len(self.listaEmp))):
            print("Salario antes de aumentar :",self.listaEmp[i].salario)
            self.listaEmp[i].salario=self.listaEmp[i].salario+0.1*self.listaEmp[i].salario
            print("Salario luego de aumentar:",self.listaEmp[i].salario)
            print()
