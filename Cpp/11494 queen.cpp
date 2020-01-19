#include<iostream>
using namespace std;

int main()
{
    int x1,x2,y1,y2,r1,r2;

    while(cin>>x1>>y1>>x2>>y2){
        if(x1==0 && x2==0 && y1==0 && y2==0)
            return 0;
        if(x1>x2)
            r1=x1-x2;
        else
            r1=x2-x1;
        if(y1>y2)
            r2=y1-y2;
        else
            r2=y2-y1;
        if(x1==x2 && y1==y2)
            cout<<"0"<<endl;
        else if(r1==r2)
            cout<<"1"<<endl;
        else if(x1==x2 || y1==y2)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
    }

    return 0;
}
