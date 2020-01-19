#include<iostream>
using namespace std;

int main()
{
    int n,k,p,ck=0,t,c;

    cin>>t;
    while(t--){
        cin>>n>>k>>p;
        c=k+p;
        ck++;
        while(c>n)
            c=c-n;
        if(c<=n)
            cout<<"Case "<<ck<<": "<<c<<endl;
    }

    return 0;
}
