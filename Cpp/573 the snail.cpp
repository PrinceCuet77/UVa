#include<iostream>
using namespace std;

int main()
{
    double h,u,p,initial;
    int day,f,d;

    while(cin>>h>>u>>d>>f){
        if(h==0)
            return 0;
        initial=day=0;
        p=(f*u)/100;
        while(1){
            day++;
            initial=initial+u;
            if(initial>h){
                cout<<"success on day ";
                break;
            }
            else
                initial=initial-d;
            if(initial<0){
                cout<<"failure on day ";
                break;
            }
            if(u>0)
                u=u-p;
            else
                u=0;
        }
        cout<<day<<endl;
    }

    return 0;
}
