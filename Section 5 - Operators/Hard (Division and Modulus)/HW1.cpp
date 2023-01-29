#include<iostream>
using namespace std;
//AdamMindGate

//Problem #1: Is even?
int main() {

    int num;
    cin>>num;

    // 1 or 0
    bool is_even = (num % 2 == 0);

    // is even = 0 , odd = 1
    //if is even = 1, odd = 0
    int odd = 1 - is_even;

    int sol_one = 100;
    int sol_two = 7;

    //if is even , (solution one  * 1) + (solution two * 0)
    //if is odd , (solution one* 0) + (solution two * 1)
    cout<<(is_even*sol_one)+(sol_two*odd);


	return 0;
}

