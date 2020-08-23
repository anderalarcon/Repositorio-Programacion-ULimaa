#lang racket

(define (area a  )
  (* (* a a) pi))
(define (vol a c)
  (* a c))
(area 5.5 )

(vol (area 5.5) 12)


