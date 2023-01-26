#include<iostream>
//AdamMindGate

//Homework 2: Guess Program Output
using namespace std;

int main() {

    int num_boys, num_girls, num_teachers;
    cin>>num_boys>>num_girls>>num_teachers;
    cout<<(num_boys > 25)<<endl;
    cout<<(num_girls <= 30)<<endl;
    cout<<(num_boys > 20 && num_teachers > 2 || num_girls > 30 && num_teachers > 4)<<endl;
    cout<<(num_boys < 60 || num_girls < 70)<<endl;
    cout<<(!(num_boys >= 60) || !(num_girls >= 70))<<endl;
    cout<<(num_boys * 10 > num_girls)<<endl;
    cout<<(num_boys - num_girls > 10 || num_teachers > 5)<<endl;
    cout<<(num_boys * 10 > num_girls || num_girls * 15 > num_boys)<<endl;

	return 0;
}


