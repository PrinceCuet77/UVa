#include<iostream>
using namespace std;

int main()
{
    int b,n,arr[25],d,c,v,i,flag;

    while((cin>>b>>n),(b||n)){
        for(i=1;i<=b;i++)
            cin>>arr[i];
        for(i=0;i<n;i++){
            cin>>d>>c>>v;
            arr[d]-=v;
            arr[c]+=v;
        }
        flag=0;
        for(i=1;i<=b;i++){
            if(arr[i]<0){
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }

    return 0;
}
