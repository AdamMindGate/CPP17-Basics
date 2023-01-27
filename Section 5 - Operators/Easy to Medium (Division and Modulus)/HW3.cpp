#include<iostream>
//AdamMindGate

//Problem #3: Our remainder
using namespace std;
// this may help, very good explanation for modulus
//https://youtu.be/Dj5viFBZVXQ
int main() {

    // 27/12 = (2).25
    // 12*2 = 24
    // 27 - 24 = (3) reminder

    double a,b;
    cin>>a>>b;
    int c = a/b;
    b *= c;
    a -= b;
    cout<<a<<endl;

    //short answer
    int rem = a - (a/b) * b;
    cout<<rem<<endl;

	return 0;
}


