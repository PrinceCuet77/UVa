#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,sum,i;

    while(scanf("%ld",&n)==1){
        sum=0;
        for(i=1;i<=n;i++){
            sum+=(i*i*i);
        }
        printf("%ld\n",sum);
    }

    return 0;
}
