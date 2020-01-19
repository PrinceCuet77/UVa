#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n[10005],Min,Max,temp;
    int i,j,t,k,m,mid,start,finish;

    while(scanf("%d",&t)==1){
        for(i=0;i<t;i++)
            scanf("%ld",&n[i]);
        sort(n,n+t);
        scanf("%d",&m);
        for(i=0;i<t;i++){
            k=m-n[i];
            start=i+1;
            finish=t-1;
            while(start<=finish){
                mid=(start+finish)/2;
                if(k==n[mid]){
                    Min=n[i];
                    Max=n[mid];
                    break;
                }
                else if(k<n[mid])
                    finish=mid-1;
                else
                    start=mid+1;
            }
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",Min,Max);
    }

    return 0;
}
