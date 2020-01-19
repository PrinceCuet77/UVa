#include<iostream>
using namespace std;

long long square(long long x){
    return x*x;
}

long bigmod(long b,long p,long m){
    if (p == 0)
        return 1;
    else if (p%2 == 0)
        return square(bigmod(b,p/2,m))%m;
    else
    return ((b%m)*bigmod(b,p-1,m))%m;
}

int main()
{
    long long b,p,m;

    while(cin>>b){
        cin>>p;
        cin>>m;
        cout<<bigmod(b,p,m)<<endl;
    }

    return 0;
}
