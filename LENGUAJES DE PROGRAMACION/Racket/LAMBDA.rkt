#lang racket
(define lista(list 1 2 3))
;((lambda(x)(+ 1 x ))2)

;(define (funcion x)
 ; (+ x 1))
;(funcion 2)

;(define (suma-cuatro x );funcion normalita
 ; (+ x 4)
 ;)
;(suma-cuatro 5)

;((lambda(x)(+ x 4))5);lambda pura

;(define suma-cuatroA(lambda(x)(+ x 4)));lambda dentro de funcion,lo uso para no llamar de nuevo a esa funcion
;(suma-cuatroA 5)

(define (potencia x)
  (* x x))
(potencia 2)

(map potencia lista)

(map(lambda(x)(* x x))lista)