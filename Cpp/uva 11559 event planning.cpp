#include<iostream>
using namespace std;

int main()
{
    long b,t,cost,n,h,w,amount,bed,i,j;

    while(cin>>n>>b>>h>>w){
        t=100000000;
        for(i=0;i<h;i++){
            cin>>amount;
            for(j=0;j<w;j++){
                cin>>bed;
                cost=0;
                if(n<=bed){
                    cost=amount*n;
                    if(t>cost)
                        t=cost;
                }
            }
        }
        if(t<=b)
            cout<<t<<endl;
        else
            cout<<"stay home"<<endl;
    }

    return 0;
}
