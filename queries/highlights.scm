; General
(reg) @variable.builtin
(propname) @variable.builtin
(meta
  kind: (_) @function.builtin)
(instruction
  kind: (_) @function.call)
(ident) @operator
(reg) @variable.builtin
(accspec) @variable

; Comments
[
  (line_comment)
] @comment

; Literals
(int) @number
(float) @number

; ; Keywords
; [
;   "byte"
;   "word"
;   "dword"
;   "qword"
;   "ptr"
;   "rel"
; ] @keyword

; ; Operators & Punctuation
; ["+" "-"] @operator

(index) @punctuation.bracket

; ["(" ")" "[" "]"]  @punctuation.bracket

[","] @punctuation.delimiter