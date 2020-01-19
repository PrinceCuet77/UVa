#include<iostream>
using namespace std;

int main()
{
    int n,flip[1050],temp,i,j,countt;

    while(cin>>n){
        for(i=0;i<n;i++)
            cin>>flip[i];
        countt=0;
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(flip[j]>flip[j+1]){
                    temp=flip[j];
                    flip[j]=flip[j+1];
                    flip[j+1]=temp;
                    countt++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<countt<<endl;
    }

    return 0;
}
