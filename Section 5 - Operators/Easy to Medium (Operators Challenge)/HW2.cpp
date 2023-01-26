#include<iostream>
//AdamMindGate

//Homework 2: Guess Program Output
using namespace std;

int main() {

	int a = 1, b = 1, c;
	// c = c+a
	// c = 1 + 1
	// c = 2 + 1
	// c = 3 + 2
	// c = 5 + 3
	// c = 8

	cout<<(c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c) <<endl;

	return 0;
}


