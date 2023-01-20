#include <iostream>

using namespace std;
//Problem #1: Swapping 3 numbers!
int main()
{
    int A,B,C,temp = -1;
    cin>>A>>B>>C;
//FOUR LINES OF CODE CHALLENGE DONE
    temp = C;
    C = A;
    A = B ;
    B = temp;
    cout<<A<<" "<<B<<" "<<C;


}
