#lang racket

(define (factorial x)
  (if(= x 0 ) 1
     ( * x (factorial(-  x 1)))))

(define lista (list 0 1 2 3 4 5 6 7 8 9))

(define (fermat n)
  (+(expt 2 (expt 2 n))1))


