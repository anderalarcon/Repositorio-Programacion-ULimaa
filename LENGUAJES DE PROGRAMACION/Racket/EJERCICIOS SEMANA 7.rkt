#lang racket
;(define lista(list 1 2 3))
;(define (funcion x)
 ; (+ x 3))
;(map funcion lista);sin lambda

;(define (funcion2 lista)(map(lambda(x)(+ x 3))lista));con lambda
;(funcion2 lista)
;------------------------------------------------------
;funcion let

;(define (potencia x)
 ; (expt x 2))

;(define (funcc x y)
  ;(let
    ;  (
   ;    (a(+ 1 (* x y)))
  ;      (b(- 1 y))
 ;       )
;    (+(* x( potencia a))(* y b)(* a b))))

;----------------------------------------------------------

(define tree '(5 (3 (1 () ()) (4 () ())) (8 (6 () ()) (9 () ())))) (define (buscar elem T)
                                                                     
(let
(
 (root (car T))
(left (cadr T))
(right (caddr T))
)
(if (= elem root)
    #t
(if (< elem root);sino
    (if (null? left);otro if
        #f
        (buscar elem left));sino
    (if (null? right)
        #f
        (buscar elem right))))))






(buscar 6 tree)