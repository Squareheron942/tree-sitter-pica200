; General
(propname) @constant
(meta) @keyword
(instruction ) @function
(ident) @variable
(reg) @type.builtin
(accspec) @type.qualifier

; Comments
[
  (line_comment)
] @comment

; Literals
(int) @number
(float) @number

[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

[","] @punctuation.delimiter