#include<iostream>
using namespace std;

int main()
{
    int test,a,f,i,j,k,t;

    cin>>test;
    while(test--){
        cin>>a>>f;
        for(i=1;i<=f;i++){
            for(j=1;j<=a;j++){
                for(k=1;k<=j;k++)
                    cout<<j;
                cout<<endl;
            }
            for(j=a-1;j>=1;j--){
                for(k=j;k>=1;k--)
                    cout<<j;
                cout<<endl;
            }
            if(i!=f || test)
                cout<<endl;
        }
    }

    return 0;
}
