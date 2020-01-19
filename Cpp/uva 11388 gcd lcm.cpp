#include<stdio.h>
#include<iostream>
using namespace std;

long long gcd(long long a,long long b){
    return b==0?a:gcd(b,a%b);
}

long long lcm(long long a,long long b){
    return a*(b/gcd(a,b));
}

int main()
{
    long long a,b,r1,r2;
    int test;

    scanf("%d",&test);
    while(test--){
        scanf("%lld %lld",&a,&b);
        long long t1,t2;
        t1=gcd(a,b);
        t2=lcm(a,b);
        if(a==t1 && b==t2)
            printf("%lld %lld\n",t1,t2);
        else
            printf("-1\n");
    }

    return 0;
}

