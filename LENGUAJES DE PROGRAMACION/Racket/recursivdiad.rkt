#lang racket
(define ( sumatoria  n)
  (if (= n 0)
      0
      (+ n (sumatoria(- n 1)))))


(define ( factorial n )
  (if(= n 0)
     1
     (* n (factorial (- n 1)))))