#include<iostream>
//AdamMindGate

//Problem #2: Last 3 digits sum

using namespace std;

int main() {

	int a;
	cin>>a;
	int n1,n2,n3;
	n1 = a%10;
	a /= 10;
	n2 = a%10;
	a /= 10;
	n3 = a%10;
	cout<<(n1+n2+n3);

	return 0;
}


