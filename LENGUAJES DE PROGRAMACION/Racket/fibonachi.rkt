#lang racket
(define (fibo n)
  (cond
    ((= n 0) 1)
    ((= n 1) 1)
    (true (+ (fibo (- n 1)) (fibo (- n 2))))
    )
  )

