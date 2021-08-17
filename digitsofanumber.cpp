#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>> number;
    
    int count=0;
    int num=number;
    
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    
    int div = pow(10,count-1);
    
    while(div!=0)
    {
        
        int q= number/div;
        int r= number%div;
         
        cout<<q<<endl;
        number=r;
        div=div/10;
    }
    return 0;
}