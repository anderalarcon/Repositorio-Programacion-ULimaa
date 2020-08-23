from concurrent.futures import ThreadPoolExecutor, as_completed
import random
import time





def sumaSec(v):

    s=0 
    start=time.time()
    for i in range(0,len(v)):
        s=s+v[i]
    end=time.time()
    print("Tiempo sec :",end-start,"- Suma es :",s)

def suma(v):
    s=0
    for i in range(0,len(v)):
        s=s+v[i]
    return s

def main():
    workers=4       #4 hilos
    vector=[random.randint(1,101)for i in range(100000)]
    sumaSec(vector)
    dim=(int)(len(vector)/(workers*10)) #25k trozos
    print(dim)
    s=0
    
    chunks=(vector[k:k+dim] for k in range(0,len(vector),dim)) # 25k en 25k
    start=time.time()
    with ThreadPoolExecutor(max_workers=workers) as executor:
        futures=[executor.submit(suma,chunk)for chunk in chunks] # cada uno de los pedasos manda al afuncion suma
        #executor cada uno de los pedasos lo manda a un tread a un hilo
    end=time.time()
    for future in as_completed(futures):
        s=s+future.result()
    print("Tiempo conc :",end-start,"Suma es :",s)
if __name__=="__main__":
    main()

