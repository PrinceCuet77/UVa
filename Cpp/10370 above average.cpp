#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double num[1001],p,sum,percent;
    int test,i,n,ck;

    cin>>test;
    while(test--){
        sum=ck=0;
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>num[i];
            sum+=num[i];
        }
        p=sum/n;
        for(i=1;i<=n;i++){
            if(num[i]>p)
                ck++;
        }
        percent=(double)(ck*100)/n;
        printf("%.3lf%%\n",percent);
    }

    return 0;
}
