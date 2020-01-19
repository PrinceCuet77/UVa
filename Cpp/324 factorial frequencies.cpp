#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long i,t,n;
    char a[1000];

    while(cin>>n){
        long fact=1;
        for(i=n;i>0;i--)
            fact=fact*i;
        cout<<fact<<endl;
        //cout<<a<<endl;
    }

    return 0;
}
