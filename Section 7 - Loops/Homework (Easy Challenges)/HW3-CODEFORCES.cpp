#include <iostream>

using namespace std;
//AdamMindGate

//Problem N. Numbers Histogram
int main()
{
    int n,m;
    char charc;
    cin>>charc>>m;
    while(m>0)
    {
        cin>>n;
        while(n>0)
        {
            cout<<charc;
            n--;
        }
        cout<<endl;
        m--;
    }


    return 0;
}
