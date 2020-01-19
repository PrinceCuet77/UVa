#include<stdio.h>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#define N 1000001
using namespace std;

char Mark[N+1];
void sieve(){
    long long i,j,limit=sqrt(N);
    Mark[1]=1;
    for(i=4; i<=N; i+=2)
        Mark[i]=1;
    for(i=3; i<=N; i+=2){
        if(!Mark[i]){
            if(i<=limit){
                for(j=i*i; j<=N; j+=(2*i))
                    Mark[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    long long prime,n,p,t,i;
    int flag1,flag2;
    double s;
    char ch[10];

    while(scanf("%lld",&n)==1){
        flag1=flag2=0;
        printf("%lld ",n);
        if(!Mark[n])
            flag1=1;
        i=n;
        if(flag1==1){
            t=log10(n);
            prime=0;
            while(n!=0){
                p=n%10;
                n/=10;
                s=pow(10,t);
                prime+=p*(int)s;
                t--;
            }
            if(!Mark[prime] && i!=prime)
                flag2=1;
        }
        if(flag1==0)
            printf("is not prime.\n");
        else if(flag1==1 && flag2==1)
            printf("is emirp.\n");
        else if(flag1==1 && flag2==0)
            printf("is prime.\n");
    }

    return 0;
}
