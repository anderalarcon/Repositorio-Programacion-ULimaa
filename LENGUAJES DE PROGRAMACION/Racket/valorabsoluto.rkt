#lang racket
(define (absoluto x)
  (cond
      [(> x 0) x]
      [(= x 0) 0]
      [else (- x)]))


(absoluto 10)
(absoluto -4)
(absoluto 0)
