#include<iostream>
using namespace std;

int main()
{
    long long a,b,t;
    int ck,c;

    while(cin>>a>>b){
        ck=0;
        cout<<"[";
        while(b!=0){
            c=a/b;
            t=b;
            b=a%b;
            a=t;
            if(b==0){
                cout<<c<<"]";
                break;
            }
            if(!ck){
                ck=1;
                cout<<c<<";";
            }
            else
                cout<<c<<",";
        }
        cout<<endl;
    }

    return 0;
}
