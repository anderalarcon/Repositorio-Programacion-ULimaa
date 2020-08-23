#lang racket
(define(evalua n)
(cond
  [(and(=(remainder n 5 )0) (=(remainder n 6)0))1]
  [(or(=(remainder n 5 )0) (=(remainder n 6)0))2]
  [else 3 ]))

(evalua 10)
(evalua 30)
(evalua 23)

