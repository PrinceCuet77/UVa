#include<iostream>
#define N 10000
using namespace std;

int main()
{
    long long a[N],i,n,m,k,b[N];
    int flag;

    while(cin>>n>>m){
        a[1]=n;
        k=1;
        flag=0;
        for(i=2;i<=N;i++){
            a[i]=a[i-1];
            if(a[i]==1){
                b[k]=a[i];
                break;
            }
            else if(a[i]%m){
                flag=1;
                break;
            }
            else{
                b[k]=a[i];
                k++;
            }
            a[i]/=m;
        }
        if(flag==0){
            for(i=1;i<=k;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"boring!"<<endl;
    }

    return 0;
}
