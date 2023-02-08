#include <iostream>

using namespace std;
//AdamMindGate

//Problem #4: Print face down left angled triangle
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
    int m = 0;
        while(m<n)
        {
            cout<<"*";
            m++;
        }
        cout<<endl;
        n--;
    }

    return 0;

}

