#lang racket

(define (discri a b c)

(- (expt b 2 )(* 4 a  c)))

(define ( calcula a b c)
  (if (=(discri a b c)0)
      (/(* -1 b )(* 2 a))
      (cons(calcula2 a b (sqrt(discri a b c)));las 2 condiciones dentro con el cons 
      (calcula2 a b (*(-(sqrt(discri a b c))))))))

 (define ( calcula2 a b d)
   (/(+(* -1 b)d)(* 2 a)))


