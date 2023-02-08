#include <iostream>

using namespace std;
//AdamMindGate

//Problem #5: Special Average
int main()
{
    int n,value;
    int even =0,odd=0;
    int evenCount=0,oddCount=0;
    cin>>n;
    while(n>0)
    {
        cin>>value;
        if(n%2 == 0)
        {
            even +=value;
            evenCount++;
        }
        else
        {
            odd +=value;
            oddCount+=1;
        }
        n--;
    }
    cout<<even/evenCount<<endl;
    cout<<odd/oddCount;


    return 0;

}

