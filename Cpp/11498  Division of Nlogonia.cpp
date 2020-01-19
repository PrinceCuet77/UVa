#include<iostream>
using namespace std;

int main()
{
    int k,n,m,x[1000],y[1000],i;

    while(cin>>k){
        if(k==0)
            break;
        cin>>n>>m;
        for(i=0;i<k;i++)
            cin>>x[i]>>y[i];
        for(i=0;i<k;i++){
            if(x[i]==n || y[i]==m)
                cout<<"divisa"<<endl;
            else if(x[i]>n && y[i]>m)
                cout<<"NE"<<endl;
            else if(x[i]<n && y[i]>m)
                cout<<"NO"<<endl;
            else if(x[i]<n && y[i]<m)
                cout<<"SO"<<endl;
            else if(x[i]>n && y[i]<m)
                cout<<"SE"<<endl;
        }
    }

    return 0;
}
