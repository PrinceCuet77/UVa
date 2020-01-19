#include<iostream>
using namespace std;

int main()
{
    int test,arr[25],n,i,j,temp,ans;

    cin>>test;
    while(test--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        ans=(arr[n-1]-arr[0])*2;
        cout<<ans<<endl;
    }

    return 0;
}
