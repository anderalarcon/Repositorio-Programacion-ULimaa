#lang racket
(define (divisible n)
(if(and (=(remainder n 5)0)(=(remainder n  6)0))#true #false))
;remainder 