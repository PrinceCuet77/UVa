#include<iostream>
#define N 1001
using namespace std;

int main()
{
    int a[N],n,t,zero,other,caseN=0,i;

    while(cin>>n){
        if(n==0)
            return 0;
        zero=other=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++){
            if(a[i]==0)
                zero++;
            else
                other++;
        }
        cout<<"Case "<<++caseN<<": "<<other-zero<<endl;
    }

    return 0;
}
