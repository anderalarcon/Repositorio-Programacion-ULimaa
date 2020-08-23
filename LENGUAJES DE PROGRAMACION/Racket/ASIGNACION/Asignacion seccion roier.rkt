#lang racket
(define palabra1(list"c" "e" "r" "e" "b" "r" "o"))
(define palabra2(list "u" "n" "i" "v" "e" "r" "s" "i" "d" "a""d"))
(define listanueva(list))


(define (encriptando lista listanueva)
  (if (empty? lista)
      listanueva
      (cond
        [(eq?(car lista)"a")(encriptando (cdr lista)(append listanueva(list "4")))]
        [(eq?(car lista)"e")(encriptando (cdr lista)(append listanueva(list "3")))]
        [(eq?(car lista)"i")(encriptando (cdr lista)(append listanueva(list "1")))]
        [(eq?(car lista)"o")(encriptando (cdr lista)(append listanueva(list "0")))]
        [(eq?(car lista)"u")(encriptando (cdr lista)(append listanueva(list "2")))]
       (else (encriptando (cdr lista)(append listanueva(list(car lista)))))
        
        )))
;(encriptando palabra1 listanueva)

;---------------------------------------------------------------------------

(define listanumeros(list 1 2 3 4 5))
(define listanumeros2(list 5 4 3 2 1))
(define (funcionasd a b)
  (+(* 2 a)(expt (* 4 b)2)))

(define (ope lista)
  (if(empty? lista)
     0
     (+(car lista)(ope (cdr lista)))))
(/(ope (map funcionasd listanumeros listanumeros2))5)

; a mi estilo pta hacer recursividad suma y de contador 

;-----------------------------------------------------------------------

    
    