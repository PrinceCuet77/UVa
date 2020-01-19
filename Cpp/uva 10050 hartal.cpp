#include<stdio.h>
using namespace std;

char check[3600];

int main()
{
    int i,j,political[110],n,test,Count,politics;

    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&politics);
        for(i=0; i<politics; i++)
            scanf("%d",&political[i]);
        Count=0;
        for(i=0; i<politics; i++){
            for(j=political[i]; j<=n; j+=political[i]){
                if((j%7!=0) && (j%7!=6))
                    check[j]=1;
            }
        }
        for(i=1; i<=n; i++){
            if(check[i]){
                Count++;
                check[i]=0;
            }
        }
        printf("%d\n",Count);
    }

    return 0;
}
