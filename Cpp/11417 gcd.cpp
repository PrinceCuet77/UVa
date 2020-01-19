#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a,int b){
    int t;
    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main()
{
    int N,i,j;
    long int g;

    while(scanf("%d",&N)==1){
            if(N==0)
                break;
            g=0;
            for(i=1;i<N;i++)
                for(j=i+1;j<=N;j++)
                    g+=gcd(i,j);
    printf("%ld\n",g);
    }

    return 0;
}
