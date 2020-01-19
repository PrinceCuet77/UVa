#include<iostream>
using namespace std;

int main()
{
    int test,f,i;
    long a,b,c,sum;

    cin>>test;
    while(test--){
        cin>>f;
        sum=0;
        for(i=1;i<=f;i++){
            cin>>a>>b>>c;
            sum+=(a*c);
        }
        cout<<sum<<endl;
    }

    return 0;
}
