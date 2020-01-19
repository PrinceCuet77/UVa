#include<iostream>
using namespace std;

int main()
{
    int n,flip[55],temp,i,j,countt,test;

    cin>>test;
    while(test--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>flip[i];
        countt=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(flip[i]>flip[j]){
                    temp=flip[i];
                    flip[i]=flip[j];
                    flip[j]=temp;
                    countt++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<countt<<" swaps."<<endl;
    }

    return 0;
}

