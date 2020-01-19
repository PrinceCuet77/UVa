#include<iostream>
using namespace std;

int main()
{
    int mem[100],t,n,ct=0,ans,i;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>mem[i];
        ct++;
        ans=mem[0];
        for(i=1;i<n;i++){
            if(ans<mem[i])
                ans=mem[i];
        }
        cout<<"Case "<<ct<<": "<<ans<<endl;
    }

    return 0;
}
