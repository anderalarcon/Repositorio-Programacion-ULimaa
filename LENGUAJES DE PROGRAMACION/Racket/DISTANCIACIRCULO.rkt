#lang racket
(define x1 0)
(define y1 0)
(define (distancia x2 y2)
  (sqrt(+(expt(- x2 x1)2)(expt(- y2 y1)2))))

(define(funcion x2 y2  )
  (if(<=(distancia  x2 y2)10)
     (begin 
     (display"El punto se encuentra dentro del circulo" )
     (cons x2 y2))
     (display"El punto se encuentra fuera del circulo")))


