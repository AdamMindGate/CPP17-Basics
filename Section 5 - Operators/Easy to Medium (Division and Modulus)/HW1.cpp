#include<iostream>
//AdamMindGate
using namespace std;
// Problem #1: Averages

int main() {

    int num1 ,num2 ,num3 ,num4 ,num5;
    cin>>num1>>num2>>num3>>num4>>num5;
    int sum = num1+num2+num3+num4+num5;

    //A) Their average
    cout<<sum / 5<<endl;
    //B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
    cout<<(num1+num2+num3)/(double)(num4+num5)<<endl;
    //C) The average of the first 3 numbers divided by the average of the last 2 numbers.
    cout<<((num1+num2+num3)/3.0)/((num4+num5)/2.0)<<endl;

	return 0;
}

