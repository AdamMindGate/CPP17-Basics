#include <iostream>
//AdamMindGate

using namespace std;

//Problem #2: Print Me

int main()
{
    int a,b;
    cin>>a>>b;
    int sol_one,sol_two;
    sol_one = 2*a+1;
    sol_two = a*a;

    int case_one = (b+1)/2;
    int case_nigative =  1 - case_one;

    cout<<case_one * sol_two + sol_one * case_nigative;
}
