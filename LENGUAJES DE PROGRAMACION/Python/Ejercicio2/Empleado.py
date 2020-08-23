from random import random

class Empleado:
    def __init__(self,codigo=0,nombre="",salario=0):
        self.codigo=codigo
        self.nombre=nombre
        self.salario=salario
        
    def generar(self):
        min=100
        max=900 #solo existen en este metodo
        minL=65
        maxL=90
        self.codigo=(int)(min+random()*(max-min))#FORMULA A USAR  entre 100 y 900
        self.salario=(int)(1000+(min+random()*(max-min)))
        self.nombre=(chr)((int)(minL+random()*(maxL-minL)))
        
    
        

        
        
#el chr me bota el caracter pero tengo que darle un numero
#multiplicar al random 10 ,100
    
    
    
    
    
    
    
    
    
  