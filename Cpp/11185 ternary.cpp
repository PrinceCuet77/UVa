#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int t,c;
    long long int n,sum,s;
    long double p;

    while(scanf("%lld",&n)==1){
        if(n<0)
            break;
        sum=0;
        for(c=0;n!=0;c++){
            t=n%3;
            n=n/3;
            p=pow(10,c);
            s=(long long int)p*t;
            sum+=s;
        }
        printf("%lld\n",sum);
    }

    return 0;
}
