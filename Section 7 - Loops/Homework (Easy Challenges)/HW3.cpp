#include <iostream>

using namespace std;
//AdamMindGate

//Problem #3: Print left angled triangle
int main()
{
    int row,col;
    cin>>row;
    col = 1;

    //works till row becomes less than 0
    while (row>0)
    {
    /*  initialize y to zero
        so every time the while loop runs
        y becomes 0
    */
        int y = 0;
        while(y<col)
        {
            cout<<"*";
            y++;
        }
        col++;
        cout<<endl;
        row--;
    }
    return 0;

}
//example - if row = 4
//(y < col) --> 0<1
//cout<< "*"
// y = 1 , col = 2 ,  row = 3
//y = 0 (y value is updated again), col = 2
//(y < col) --> 0<2
//cout<< "**"
// y = 1 , col = 3 , row = 2
//y = 0 , col = 3
//(y < col) --> 0<3
//print<< "***"
// y = 1 , col = 4 , row = 1
//y = 0 , col = 4
//(y < col) --> 0<4
//print<< "****"
// y = 1 , col = 5 , row = 0
//the parent while wont work because row is zero now


//final pattern will be

//*
//**
//***
//****

