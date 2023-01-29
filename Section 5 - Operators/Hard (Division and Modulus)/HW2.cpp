#include<iostream>
//AdamMindGate

//Problem #2: Last 3 digits sum

using namespace std;

int main() {
    int days, months =0, years=0;
	cin>>days;

	years = days / 360;
    days = days - (years * 360);

    months = days / 30;
    days = days - months * 30;
    cout<<years<<" "<<months<<" "<<days;
    return 0;

}


