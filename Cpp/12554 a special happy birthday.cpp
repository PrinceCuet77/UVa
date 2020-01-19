#include<iostream>
using namespace std;

int main()
{
    int i,n,j,k,f;
    char song[16][10]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char man[101][101];

    while(cin>>n){
        for(i=0;i<n;i++)
            cin>>man[i];
        if(n<16)
            f=16;
        else if(n<32)
            f=32;
        else if(n<48)
            f=48;
        else if(n<64)
            f=64;
        else if(n<80)
            f=80;
        else if(n<96)
            f=96;
        else
            f=100;
        for(i=0,j=0,k=0;i<f;i++,j++,k++){
            if(j==n)
                j=0;
            if(k==16)
                k=0;
            cout<<man[j]<<": "<<song[k]<<endl;
        }
    }

    return 0;
}
