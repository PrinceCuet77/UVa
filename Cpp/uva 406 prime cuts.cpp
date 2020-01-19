#include<stdio.h>
#include<iostream>
#include<math.h>
#define N 1010
using namespace std;

int Prime[N],nPrime;
int Mark[N];

void sieve (){
    int i,j;
    for(i=4;i<=N;i+=2)
        Mark[i]=1;
    Prime[nPrime++]=1;
    Prime[nPrime++]=2;

    for(i=3;i<=N;i+=2){
        if(!Mark[i]){
            Prime[nPrime++]=i;
            for(j=i*i;j<=N;j+=i*2)
                Mark[j]=1;
        }
    }
}

int main()
{
    sieve();
    int n,c,i,start,End,Count,tmpN;

    while(cin>>n>>c){
        Count=0;
        tmpN=n;

        n=n>1000?1000:n;

        for(i=0; ;i++){
            if(Prime[i]>n)
                break;
            Count++;
        }

        if(Count%2==0){
            start=Count/2-c;
            End=start+2*c;
        }
        else{
            start=Count/2-c+1;
            End=start+2*c-1;
        }

        start=start<0?0:start;
        End=End>Count-1?Count:End;

        printf("%d %d:",tmpN,c);
        for(i=start;i<End;i++){
            printf(" %d",Prime[i]);
        }
        printf("\n\n");
    }

    return 0;
}

