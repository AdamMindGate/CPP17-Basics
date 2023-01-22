# Section-Summary
## Operator Precedence

- ( ) - expressions inside brackets have the highest precedence
- unary operators , "++" , "--" , "!" unary operators have the second highest precedence
- mulitplication and division, "\*", "/" comes third in the precedence
- plus and minus, "+" , "-" comes after the muliplication and division
- assignment operator, [ = , += , *= , /= ..etc] comes last in the precedence

## Operator Associativity

### "What if operators have the same precedence ?"

- Associativity : group either from left or from right
  > 10 - 6 + 3 -> ? </br>
  >
  > in this case expressions will group from left to right every two operand </br>
  > 10 - 6 + 3 -> (10 - 6) + 3 -> 4 +3 -> 7 </br>

### Assignment operators works differently </br>

They group from right to left, as in brief </br>
**left-to-right** : + - _ / & </br>
**right-to-left**: = += _= /= %=

## Order of Evaluation

Evaluation ≠ Associativity
Operators in C++ don't have a specific order of evoluation <br>

- example

```cs
x = 1 , y = 2
x + y
```

which one will be computed first? the answer is no one knows because there isnt an order of evaluation.
could be X, could be Y.
