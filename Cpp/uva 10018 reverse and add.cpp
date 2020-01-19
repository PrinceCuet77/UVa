#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,n;
    int test,Count;

    scanf("%d",&test);
    while(test--){
        Count=0;
        scanf("%lld",&n);
        while(1){
            a=n;
            b=0;
            while(n!=0){
                b=b*10+n%10;
                n/=10;
            }
            if(b==a)
                break;
            else{
                n=a+b;
                Count++;
            }
        }
        printf("%d %lld\n",Count,b);
    }

    return 0;
}
