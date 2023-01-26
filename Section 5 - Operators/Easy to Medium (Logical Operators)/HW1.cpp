#include<iostream>
//AdamMindGate
using namespace std;
// Homework 1: Guess the output

int main() {

	int a = 10, b = 20, c = 30, d = 40;

    //1 (true)
	cout << (a + b == c) << "\n";

	//0 (false)
	cout << (a + b + c >= 2 * d) << "\n";

    //1 (true)
	cout << (a > 5 || d < 30) << "\n";

	//0 (false)
	cout << (a > 5 && d < 30) << "\n";

	//1 (true)
	cout << (a <= b && b <= c) << "\n";

    //1 (true)
	cout << (a > 5 && d < 30 || c - b == 10) << "\n";

	//1 (true)
	cout << (a <= b && b <= c && c <= d) << "\n";

    //1 (true)
	cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n";

	//0 (false)
	cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n";

	//1 (true)
	cout << ( a == 10 || b != 20  && c != 30 || d != 40) << "\n";
	//0 (false)
	cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n";

	return 0;
}

