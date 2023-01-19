#include <iostream>

using namespace std;

int main()
{
    int num1, num2,num3 =-1;
    cin>>num1>>num2;
    /* num3 saves the value of
    num1 so after exchange it stays
    preserved to be put in num2 */
    num3 = num1;
    num1 = num2;
    num2 = num3;
    cout<<num1<<" "<<num2;
    return 0;
}
