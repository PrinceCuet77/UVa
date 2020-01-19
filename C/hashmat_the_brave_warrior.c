#include<stdio.h>

int main()
{
    long long a,b,temp,i;

    while(scanf("%lld %lld",&a,&b)!=EOF){
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        i=b-a;
        printf("%lld\n",i);
    }
    return 0;
}
