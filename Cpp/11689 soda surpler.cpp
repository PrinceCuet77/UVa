#include<iostream>
using namespace std;

int main()
{
    int e,f,c,a,t1,t;

    cin>>t1;
    while(t1--){
        cin>>e>>f>>c;
        if(e>=0 && f>=0 && c>1){
            a=e+f;
            for(t=0;a>=c;){
                a=a-c;
                a++;
                t++;
            }
        }
        cout<<t<<endl;
    }

    return 0;
}
