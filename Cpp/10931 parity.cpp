#include<iostream>
using namespace std;

int main()
{
    int n,i,parity[35],mark,index;

    while(cin>>n){
        if(n==0)
            return 0;
        index=mark=0;
        while(n>0){
            parity[index]=n%2;
            n/=2;
            if(parity[index]==1)
                mark++;
            index++;
        }
        cout<<"The parity of ";
        for(i=index-1;i>=0;i--){
            cout<<parity[i];
        }
        cout<<" is "<<mark<<" (mod 2)."<<endl;
    }

    return 0;
}

