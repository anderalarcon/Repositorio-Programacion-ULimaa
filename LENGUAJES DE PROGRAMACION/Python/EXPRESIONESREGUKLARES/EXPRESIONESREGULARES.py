import re

def main():
    
    texto="esto es un text de prueba"
    texto1="333 3232 333"#solo para numero
    text2="email  p1 perso@gmail.com y email p2 pers2@hotmail.com"
    

   # x=re.search("[0-9]",texto)
    #x=re.search("[a-z]",texto)

   # print(x)
  #  if x:
   #     print("Hay un txt ")
  #  else :
    #    print("No hay un txt")
        
        
        
   # x=re.findall("[0-9]",texto1) #coincidencias en forma de una lista
    #print(x)
    
    x=re.findall("[\w]+@[\w]+\.[\w]+", text2)  #+ -> si encuentra una palabra una o mas veces
                                                #. representa todos los carateres
                                                #busca antes y luego del arroba
    for item in x:
        print(item)
        
if __name__=="__main__":
    main()
