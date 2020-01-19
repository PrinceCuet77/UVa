#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    return b==0?a:gcd(b,a%b);
}

int main()
{
    int test;
    long long a,b,t;

    scanf("%d",&test);
    while(test--){
        scanf("%lld / %lld",&a,&b);
        t=gcd(a,b);
        a=a/t;
        b=b/t;
        printf("%lld / %lld\n",a,b);
    }

    return 0;
}
