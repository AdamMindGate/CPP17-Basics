#include <iostream>

using namespace std;
//AdamMindGate

//Problem #1: Intervals
int main()
{
    int x,s1,e1,s2,e2,s3,e3;
    cin>>x>>s1>>e1>>s2>>e2>>s3>>e3;
    int counter =0;
    if (x >=s1 && x<= e1)
        counter+=1;
    if (x >=s2 && x<= e2)
        counter+=1;
    if (x >=s3 && x<= e3)
        counter+=1;

    cout<<counter;

    return 0;

}

