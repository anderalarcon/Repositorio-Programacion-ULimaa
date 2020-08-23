#lang racket
(define lista(list 0 1 2 3 4 5))
(define (fermat n)
  (+(expt 2 (expt 2 n))1))
(map fermat lista);a)


(define lista2(list 1 2 3))
(define lista3(list 4 5 6))
(define (func a)
  (+ a 1))













































;----------------------------------------------------------------
(require math)
(define (factorizar n)
  (factorize n))
(map factorizar (map fermat lista));b



;----------------------------------------------------------------
(define (evaluando numero)
  (if(empty? (cdr(factorize numero)))#t
     #f))
(map evaluando (map fermat lista));c
