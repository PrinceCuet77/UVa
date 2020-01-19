#include<iostream>
using namespace std;

int main()
{
    int h1,h2,m1,m2,h,m,t;

    while(cin>>h1>>m1>>h2>>m2){
        t=0;
        ///cout<<h1<<" "<<h2<<" "<<m1<<" "<<m2<<endl;
        if(h1==0 && h2==0 && m1==0 && m2==0)
            return 0;
        if(m1==m2){
            if(h1>h2)
                h=24+h2-h1;
            else
                h=h2-h1;
    ///cout<<h<<endl;
            t=h*60;
        }
        else if(m1>m2){
            m=60+m2-m1;
            if(h1>=h2)
                h=23+h2-h1;
            else
                h=h2-h1-1;
            t=(h*60)+m;
        }
        else{
            m=m2-m1;
            if(h1>h2)
                h=24+h2-h1;
            else
                h=h2-h1;
            t=(h*60)+m;
        }
        cout<<t<<endl;
    }

    return 0;
}
