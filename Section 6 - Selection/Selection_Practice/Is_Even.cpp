#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    bool is_even = (num%2 == 0);

    if (is_even)
    {
        cout<<(num % 10)<<endl;
    }
    else
    {
        if (num < 1000)
        cout<<(num%100)<<endl;
        else if (num < 1000000)
        cout<<(num%10000)<<endl;
        else
        cout<<-num<<endl;
    }


    return 0;

}

