// Homework 4: Print Program Output

#include<iostream>
//AdamMindGate
using namespace std;
/*
answer
-----
1
2
3
5
8
13
21
34
55
---------------------------
(I don't know the "Fibonacci number" yet but)
I deducted a pattern and that helped me get
the answer without keep tracing on each line.
num3 = current number + last number
(starting from the second output)
--------
3 = 2+1
5 = 3+2
8 = 5+3
13 = 8 + 5
21 = 13 + 8
etc..in conclusion the next output
is the current + last output.
---------
*/
int main() {
	int num1, num2, num3;

	num1 = 0, num2 = 1, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

	// https://en.wikipedia.org/wiki/Fibonacci_number

	return 0;
}

