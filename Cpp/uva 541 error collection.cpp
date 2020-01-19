#include<stdio.h>
using namespace std;

int main()
{
    int mat[200][200];
    int i,j,n,flag1,flag2,sum1,row,col,sum2;

    while(scanf("%d",&n),n){
        for(i=0; i<n; i++){
            for(j=0; j<n; j++)
                scanf("%d",&mat[i][j]);
        }
        flag1=flag2=0;
        row=col=0;
        for(i=0; i<n; i++){
            sum1=0;
            for(j=0; j<n; j++)
                sum1+=mat[i][j];
            if(sum1&1){
                row=i+1;
                flag1++;
            }
        }
        for(i=0; i<n; i++){
            sum2=0;
            for(j=0; j<n; j++)
                sum2+=mat[j][i];
            if(sum2&1){
                col=i+1;
                flag2++;
            }
        }
        if(flag1==0 && flag2==0)
            printf("OK\n");
        else if(flag1==1 && flag2==1)
            printf("Change bit (%d,%d)\n",row,col);
        else
            printf("Corrupt\n");
    }

    return 0;
}
