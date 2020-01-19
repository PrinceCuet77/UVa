#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0,sum,a,b,t,i,ck,temp;

    cin>>t;
    while((t--) && (t>=0 && t<=100)){
        sum=0;
        cin>>a>>b;
        if(a>=0 && a<=b && b<=100){
            if(a>b){
                temp=b;
                b=a;
                a=temp;
            }
            count++;
            for(i=a;i<=b;i++){
                if(i%2)
                    sum+=i;
            }
            cout<<"Case "<<count<<": "<<sum<<endl;
        }
    }

    return 0;
}
