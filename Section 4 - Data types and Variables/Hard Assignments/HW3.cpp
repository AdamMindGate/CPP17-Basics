#include <iostream>

using namespace std;
//Problem #3: Sum numbers from 1 to N

/*topics that you will need
"Sum of first n natural numbers"
https://youtu.be/aaFrAFZATKU
*/
int main()
{
    int n;
    cin>>n;
    int sum = (n+1) * n/2;
    cout<<sum;
}
