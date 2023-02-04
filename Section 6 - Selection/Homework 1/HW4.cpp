#include <iostream>

using namespace std;
//AdamMindGate

//Problem #4: Conditional Count

int main()
{
    int x,num1,num2,num3,num4,num5;
    cin>>x>>num1>>num2>>num3>>num4>>num5;

    int n1 =0;
    n1 +=(num1<=x);
    n1 +=(num2<=x);
    n1 +=(num3<=x);
    n1 +=(num4<=x);
    n1 +=(num5<=x);


    cout<<n1<<" "<<5-n1;

    return 0;

}

