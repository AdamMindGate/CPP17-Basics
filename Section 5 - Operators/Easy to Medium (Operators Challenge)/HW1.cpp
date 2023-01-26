#include<iostream>
using namespace std;
//AdamMindGate

//Homework 1: Guess Program Output
int main() {
	int a = 0, b = 1;

	//0
	cout<<a++<<"\n";
	//2
	cout<<++a<<"\n";
	//2+(2*1)+1
	//2+2+1
	//2+3 = 5
	a += 2*b+1;
	//a= 5, (++a) == 5+=1
	//6*2 = 12
	//b = 12
	b = ++a * 2;
	//6 12
	cout<<a<<" "<<b<<"\n";
    //a = 6, then b = 6
	b = a;
	//answer by steps
	//12 + 6/(3/2) - (2*2)
	//12 + 2/2 - 4
	//12 + 1 - 4
	//12 + -3
	//9
	a = 12 + a / 3 / 2 - 2 * 2;
	//a = 9
	cout<<a<<"\n";

	//a = 6 (b=6)
	a = b;
	//a = ((12+6)/3/2-2) * 2
	//a = (18/3/2-2) * 2
	//a = (6/2-2) * 2
	//a = (3-2) * 2
	//a = (1) * 2
	//a = 2
	a = ((12 + a) / 3 / 2 - 2) * 2;
    //a = 2
	cout<<a<<"\n";

	return 0;
}

