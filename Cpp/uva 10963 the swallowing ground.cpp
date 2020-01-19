#include<iostream>
using namespace std;

int main()
{
    int test,up,down,gap,n,i,flag,t;

    cin>>test;
    while(test--){
        cin>>n;
        flag=1;
        cin>>up>>down;
        gap=up-down;
        for(i=1;i<n;i++){
            cin>>up>>down;
            t=up-down;
            if(gap!=t)
                flag=0;
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        if(test)
            cout<<endl;
    }

    return 0;
}
