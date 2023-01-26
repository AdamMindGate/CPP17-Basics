#include<iostream>
//AdamMindGate

//Homework 3: Guess Program Output
using namespace std;

int main() {

	int a = 210;

	a /= 2;
	//105
	cout<<a<<"\n";
	//35
	cout<<(a /= 3)<<"\n";
	//7
	cout<<(a /= 5)<<"\n";
	//1
	cout<<(a /= 7)<<"\n";
    //5 * 8 / 5 /8
    // 40 / 5 / 8
    // 8 /8
    //1
	cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n";

	a = 10;
	//20
	cout<<a++ + 10<<"\n";
	//22
	cout<<++a + 10<<"\n";
	//22
	cout<<a-- + 10<<"\n";
	//20
	cout<<--a + 10<<"\n";

	int b = 20;
	//31
	cout<<a++ + ++b<<"\n";	// Don't code this way
    //11
	cout<<a<<"\n";
	//22
	++a+=10;	// Don't code this way
	cout<<a<<"\n";



	return 0;
}


