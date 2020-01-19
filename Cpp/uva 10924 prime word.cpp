#include<stdio.h>
#include<cmath>
#include<cstring>
#define N 10000
using namespace std;

char Mark[N];
void sieve(){
    long i,j,limit=sqrt(N);
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
    char ch[25];

    while(scanf("%s",ch)==1){
        int len = strlen(ch);
        int sum=0;
        for(int i=0; i<len; i++){
            if(ch[i]>='a' && ch[i]<='z')
                sum+=(int)(ch[i]-'a')+1;
            else if(ch[i]>='A' && ch[i]<='Z')
                sum+=(int)(ch[i]-'A')+27;
        }
        if(!Mark[sum])
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }

    return 0;
}
