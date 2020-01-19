#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,t;

    while(scanf("%lld %lld",&a,&b)==2){
        t=a^b;
        printf("%lld\n",t);
    }

    return 0;
}
