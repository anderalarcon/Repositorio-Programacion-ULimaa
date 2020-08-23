#lang racket

(define (distancia a b c d )
  (sqrt(+(expt(- c a) 2 ) (expt(- d b) 2 ))))

(distancia 1.5 -3.4 4 5)