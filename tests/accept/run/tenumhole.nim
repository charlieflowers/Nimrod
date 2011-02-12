
const
  strValB = "my value B"

type
  TMyEnum = enum
    valueA = (1, "my value A"),
    valueB = strValB & "conc",
    valueC,
    valueD = (4, "abc")
 
# trick the optimizer with a variable:
var x = valueD
echo valueA, ord(valueA), valueB, ord(valueB), valueC, valueD, ord(valueD), x


