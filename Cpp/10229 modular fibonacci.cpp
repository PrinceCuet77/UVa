#include<iostream>
#include<math.h>
using namespace std;

long long mod(long long n){
    if(n==1||n==0)
        return 1;
    else
        return mod(n-1)+mod(n-2);
}

int main()
{
    long long n,i,t;
    long m;
    while(cin>>n){
        t=(int)pow(2,m);
        cout<<mod(n-1)<<endl;
        //cout<<t<<endl;
        ///cout<<a[i-1]%t<<endl;
    }

    return 0;
}
