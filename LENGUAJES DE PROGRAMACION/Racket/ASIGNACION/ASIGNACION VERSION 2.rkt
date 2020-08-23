#lang racket
(require math)
;a)
(define lista(list 0 1 2 3 4 5))
  (display"Numeros fermat: \n")
 

(define (fermat2 lista)(map (lambda(x)(+(expt 2 (expt 2 x))1))lista))
(fermat2 lista)
 
;----------------------------------------------------------------
;b)
  (display"Factores primos : \n")
(define (factorizar )
  (map (lambda(x)(factorize x)) (fermat2 lista)))

 (factorizar )                
  
;----------------------------------------------------------------
;c)
(display"Evaluacion de los factores primos \n")
(define (evaluando numero)
  (if(empty? (cdr(factorize numero)))#t
     #f))
(map evaluando (fermat2 lista ));c

