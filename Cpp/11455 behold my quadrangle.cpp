#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c,d;
    int t;

    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if((a==0) || (b==0) || (c==0) || (d==0))
            cout<<"banana"<<endl;
        else if(((a+b+c)<=d) || ((b+c+d)<=a) || ((a+d+c)<=b) || ((a+d+b)<=c))
            cout<<"banana"<<endl;
        else if((a==b) && (a==d) && (a==c))
            cout<<"square"<<endl;
        else if((a==b && c==d) || (b==c && a==d) || (c==a && b==d))
            cout<<"rectangle"<<endl;
        else
            cout<<"quadrangle"<<endl;
    }

    return 0;
}

