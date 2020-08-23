#lang racket
(define lista(list -3 -2 -1 0 1 2 3 4 ))

(define listaasd(list 10 20 30))

(define listanueva(list))


(define lista2(list))
(define (sumalista lista);1
  (if(empty? lista)0
     (+ (car lista) (sumalista (cdr lista) ))))


(define (mostrar lista);2
  (if(empty? lista)(display "")
     (begin
       (display(car lista))
       (mostrar (cdr lista))
       )))



(define (funcion listaa );esteeee 
  (if(empty? listaa)
     '()
    (append(list(expt(car listaa)2))(funcion(cdr listaa)))))


     











(define (juntando lista1 lista2);juntando listas tipo append
  (if(null? lista1)
     lista2
     (cons(car lista1)(juntando(cdr lista1)lista2))))







