#include<iostream>
using namespace std;
//AdamMindGate

//Problem #1: Is even?
int main() {

    int num;
    cin>>num;

    bool is_even1 = (num%2 == 0);
    bool is_even2 = (num/2 == num/2.0);
    int lastNum = num%10;
    bool is_even3 = (lastNum == 0||lastNum == 2||lastNum == 4||lastNum == 6||lastNum == 8);


	return 0;
}

