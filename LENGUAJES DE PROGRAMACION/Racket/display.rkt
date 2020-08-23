#lang racket
(define n 45 )
(cond
  [(< n 10 ) 5.0]
  [(< n 20 ) 5]
  [(< n 30 ) true ]
  [else 0.65]  );como un elseif que tiene varios la primera condicion que satisfaga

(define (test a )
  (if(and (> a 2) ( < a 8 ))
     (begin
     (display " profecohatuamre")
     (+ a 3))
     (* a 10)))
;begin agrupa instruccionems 