#include <iostream>

using namespace std;
//AdamMindGate

//Problem #2: Sort 3 numbers
int main()
{
    int a,b,c;
    int fir,sec,thi;
    cin>>a>>b>>c;

    if (a < b && a <c)
    {
        fir =a;
        if(b<c)
        {
            sec = b;
            thi = c;
        }
        else
        {
            sec = c;
            thi = c;
        }
    }
    else if (c < b && c <a)
    {
        fir =c;
         if(a<b)
        {
            sec = a;
            thi = b;
        }
        else
        {
            sec = b;
            thi = a;
        }
    }
    else
    {
        fir =b;
         if(c<a)
        {
            sec = c;
            thi = a;
        }
        else
        {
            sec = a;
            thi = c;
        }
    }

    cout<<fir<<" "<<sec<<" "<<thi;

    return 0;

}

