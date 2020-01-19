#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,q,i,small,tall,lo,hi,mid;
    long a[50001],b[25001];

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++)
        scanf("%ld",&b[i]);
    for(i=0;i<q;i++){
        lo=0;
        hi=n-1;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(a[mid]==b[i]){
                hi=mid;
                if(a[mid-1]==b[i])
                    hi=mid-1;
                else
                    break;
            }
            else if(a[mid]<b[i])
                lo=mid+1;
            else
                hi=mid-1;
        }
        if(a[mid]>a[0]){
            if(a[mid]==b[i])
                printf("%ld ",a[mid-1]);
            else if(a[mid]>b[i])
                printf("%ld ",a[mid-1]);
            else if(a[mid]<b[i])
                printf("%ld ",a[mid]);
        }
        else
            printf("X ");
        if(a[mid]<=a[n-1]){
            if(a[mid]==b[i]){
                if(mid==n-1)
                    printf("X\n");
                else
                    printf("%ld\n",a[mid+1]);
            }
            else if(a[mid]>b[i])
                printf("%ld\n",a[mid]);
            else if(a[mid]<b[i])
                printf("X\n");
        }
        else
            printf("X\n");
    }
    return 0;
}
