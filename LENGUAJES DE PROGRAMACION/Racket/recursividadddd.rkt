#lang racket
(define (metodo i);20.4
  ( if (= i 1)
       1
       (+ (/ 1.0 i) (metodo(- i 1 )))))


(define ( metodo2 i);20.5
  (if(= i 1 )
     1/3
     (+(/ i (+ (* 2 i) 1.0))(metodo2(- i 1)))))


(define (metodo3 i);20.6
  (if(= i 1)
       1/2
    (+(/ i (+ i 1))(metodo3 (- i 1)))))

(define (metodoa m n);20.3
  (if(=(remainder m n)0) n
     (metodoa n (remainder m n ))))

