#lang racket
(define contador 1)
(define acumulador 0)
(define lista(list 1 2 3 4 5 6 7 8 9 10))
  

(define (funcion numero contador acumulador)
       (if(and(>= numero contador )(=(remainder numero contador)0))
              (funcion numero(+ contador 1)(+ acumulador 1))

                      (if(>= numero contador)
                         (funcion numero(+ contador 1)acumulador)
                         (if(= acumulador 2)
                            (display "Es primo")
                            (display "No es primo")))))


