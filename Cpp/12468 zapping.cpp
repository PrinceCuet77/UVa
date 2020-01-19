#include<iostream>
using namespace std;

int main()
{
    int a,b,total1,total2,temp;

    while(cin>>a>>b){
        if(a<0 && b<0)
            return 0;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        total1=100+a-b;
        total2=b-a;
        if(total1<total2)
            cout<<total1<<endl;
        else
            cout<<total2<<endl;
    }

    return 0;
}
