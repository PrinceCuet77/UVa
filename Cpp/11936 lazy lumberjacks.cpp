#include<iostream>
using namespace std;

int main()
{
    int test,a,b,c;

    cin>>test;
    while(test--){
        cin>>a>>b>>c;
        if((a+b)<=c || (a+c)<=b || (b+c)<=a)
            cout<<"Wrong!!"<<endl;
        else
            cout<<"OK"<<endl;
    }

    return 0;
}
