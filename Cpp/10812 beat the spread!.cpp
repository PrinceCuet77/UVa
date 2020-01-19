#include<iostream>
using namespace std;

int main()
{
    int x,y,test,a,b;

    cin>>test;
    while(test--){
        cin>>a>>b;
        if(b>a || (a-b)%2!=0)
            cout<<"impossible"<<endl;
        else{
            y=(a-b)/2;
            x=b+y;
            cout<<x<<" "<<y<<endl;
        }
    }

    return 0;
}
