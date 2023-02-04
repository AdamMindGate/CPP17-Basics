#include <iostream>

using namespace std;

int main()
{
   double num1,num2;
   char operation;
   cin>>operation>>num1>>num2;

   if (operation == '+')
    cout<<num1+num2;
   else if (operation == '-')
    cout<<num1-num2;
   else if (operation == '*')
    cout<<num1*num2;
   else
    cout<<num1/num2;

   return 0;

}

