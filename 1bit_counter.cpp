#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    int digit;
    cout<<"enter the number";
    cin>>n;
    for(n;n>0;n=n>>1)
    {
        digit=n&1;
        if(digit==1)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
