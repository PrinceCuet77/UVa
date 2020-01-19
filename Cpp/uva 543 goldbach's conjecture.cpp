#include<bits/stdc++.h>
#include<cmath>
#define N 1000000
using namespace std;

char Mark[N+1];
void Sieve(){
    int i,j,limit=sqrt(N)+1;
    Mark[1]=1;
    for(i=4;i<=N;i+=2)
        Mark[i]=1;
    for(i=3;i<=N;i+=2){
        if(!Mark[i]){
            if(i<=limit){
                for(j=i*i;j<=N;j+=i*2)
                    Mark[j]=1;
            }
        }
    }
}


int main()
{
    long n,a,k;

    Sieve();
    while(scanf("%ld",&n),n){
        int flag=0;
        for(int i=1;i<=n;i++){
            if(!Mark[i]){
                k=n-i;
                if(!Mark[k]){
                    a=i;
                    flag=1;
                    break;
                }
            }
        }
        if(flag)
            printf("%ld = %ld + %ld\n",n,a,k);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}
