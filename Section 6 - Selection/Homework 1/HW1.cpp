#include <iostream>

using namespace std;
//AdamMindGate

//Problem#1: Arithmetic
int main()
{
    int a,b;
    cin>>a>>b;

    if (a%2 == 1 && b%2==1)
        cout<<(a*b);

    if (a%2 == 0 && b%2==0)
        cout<<(a/b);

    if(a%2 == 1 && b%2==0)
        cout<<(a+b);

    if(a%2 == 0 && b%2==1)
        cout<<(a-b);

    return 0;

}

