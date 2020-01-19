#include<stdio.h>
#include<cmath>
#define N 20000001
using namespace std;

char Mark[N+1];
long Prime[N],nPrime;
void sieve(){
    long i,j,limit=sqrt(N);
    Mark[1]=1;
    Prime[nPrime++]=2;
    for(i=4; i<=N; i+=2)
        Mark[i]=1;
    for(i=3; i<=N; i+=2){
        if(!Mark[i]){
            Prime[nPrime++]=i;
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
    long n;
    while(scanf("%ld",&n)==1){
        printf("(%ld, %ld)\n",Prime[n],Prime[n+1]);
    }

    return 0;
}
