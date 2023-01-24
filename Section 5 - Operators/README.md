# Section-Summary
## 1.Operator Precedence

- ( ) - expressions inside brackets have the highest precedence
- unary operators , "++" , "--" , "!" unary operators have the second highest precedence
- mulitplication and division, "\*", "/" comes third in the precedence
- plus and minus, "+" , "-" comes after the muliplication and division
- assignment operator, [ = , += , *= , /= ..etc] comes last in the precedence

## 2.Operator Associativity

### "What if operators have the same precedence ?"

- Associativity : group either from left or from right
  > 10 - 6 + 3 -> ? </br>
  >
  in this case expressions will group from left to right every two operand </br>
  > 10 - 6 + 3 -> (10 - 6) + 3 -> 4 +3 -> 7 </br>

### Assignment operators works differently </br>

They group from right to left, as in brief </br>
**left-to-right** : + - _ / & </br>
**right-to-left**: = += _= /= %=

## 3.Order of Evaluation

Evaluation ≠ Associativity
Operators in C++ don't have a specific order of evoluation <br>

- example

```cs
x = 1 , y = 2
x + y
```

which one will be computed first? the answer is no one knows because there isnt an order of evaluation.
could be X, could be Y.

## 4.Relational Operators 
Relational operators are used for comparisons and it returns a boolen value (either 1 or 0) <br>
( == , >= , <= , != ) <br>
Relational operators are not used for numbers only, it can be used with variables and even with <strong> strings </strong> and also with booleans.
<h3>How strings are compared?</h3>

- every letter has a numerical order so some letters have higher number in the numerical order
- fun fact : small letters have higher number in numerical order than capital letters so.. (a > A) <br>
(strings are a big world dont dive deep to it but take a quick idea about it.)
