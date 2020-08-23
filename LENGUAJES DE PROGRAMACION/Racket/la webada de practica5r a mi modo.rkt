#lang racket
(define (discriminante a b c)
  (-(expt b 2 )(* 4 a c)))


(define (cero a b )
 (/ (- b) (* 2 a )))

(define (raiz a b c)
  (/(+(- b) (sqrt (discriminante a b c)))(* 2 a )))
(define (raiz2 a b c)
  (/(-(- b) (sqrt (discriminante a b c)))(* 2 a )))

(define (evaluando a b c )
  (if(=(discriminante a b c)0)
     (cero a b)
     (cons(raiz a b c)(raiz2 a b c))))




(evaluando 1 2 3)