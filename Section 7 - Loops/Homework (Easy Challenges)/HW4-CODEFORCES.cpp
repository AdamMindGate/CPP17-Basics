#include <iostream>

using namespace std;
//AdamMindGate

//Problem O. Pyramid
int main()
{
    int row,col;
    cin>>row;
    col = 1;

    while (row>0)
    {
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
