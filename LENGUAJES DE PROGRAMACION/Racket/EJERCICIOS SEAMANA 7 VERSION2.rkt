#lang racket
;Ejercicio1
;(define lista(list 1 2 3 4 5))
;(define(funcion a )
;  (+ a 3))
;(map funcion lista)

;(define (fl lista)(map (lambda(x)(+ x 3))lista))
;(fl lista)
;-----------------------------------------
;Ejercicio clase
;(define (algebra x y)
;  (let;pa todo la funcion es el let claro ps 
 ;     (
  ;    (a(+ 1 (* x y)))
  ;    (b(- 1 y))
  ;  )
  ;  (+(* x (expt a 2))(* y b)(* a b))))
;------------------------------------------
;Ejercicio 3

(define (e3 a b c)
  (let
      (
       (discriraiz(sqrt(-(expt b 2)(* 4 a c))))
       (discri(-(expt b 2)(* 4 a c)))
      (discricero(/ (- b)(* 2 a)))
    
      )
    (if(=(* discri 1)0)
       
       (* discricero 1 )
       
     (cons (/(+(- b)(* discriraiz 1))(* 2 a))(/(-(- b)(* discriraiz 1))(* 2 a))))))

;Importante : Las asignaciones en let no son resultados tengo que multiplicarles * 1 para que pueda trabajar si no F
;(e3 1 2 3)
;----------------------------------------------------------------------------------------------------------------------
;Ejercicio2


   
    










