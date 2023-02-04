#include <iostream>

using namespace std;

int main()
{
   int num;
   cin>>num;

   if (num < 1000)
   {
       cout<<"this is a small number";
   }
   else
   {
       int n1 = num%10;
       num/=10;
       int n2 = num%10;
       num/=10;
       int n3 = num%10;
       int sum = n1+n2+n3;

       cout<<sum<<endl;
       if (n1%2 ==1)
       {
           cout<<"this is great number";
       }
       else
       {
           bool is_n1_odd =(n1 % 2 == 1);
           bool is_n2_odd =(n1 % 2 == 1);
           bool is_n3_odd =(n1 % 2 == 1);

           if (is_n1_odd || is_n2_odd || is_n3_odd )
           {
            cout<<"this is good number";
           }
           else
           {
            cout<<"this is a bad number";
           }
       }
   }
   return 0;

}

