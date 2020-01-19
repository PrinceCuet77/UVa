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
    long n,a,Count;

    Sieve();
    while(scanf("%ld",&n),n){
        long Half=n/2;
        Count=0;
        for(long i=1;i<=Half;i++){
            if(!Mark[i]){
                if(!Mark[n-i])
                    Count++;
            }
        }
        printf("%ld\n",Count);
    }

    return 0;
}

