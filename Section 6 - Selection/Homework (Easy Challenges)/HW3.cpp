#include <iostream>

using namespace std;
//AdamMindGate

//Problem #3: Maximum but constrained
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maximum =-1;

    //115 20 30
    if (a<100 && a>maximum)
        maximum = a;
    if (b<100 && b>maximum)
        maximum = b;
    if (c<100 && c>maximum)
        maximum = c;


    cout<<maximum;

    return 0;

}

