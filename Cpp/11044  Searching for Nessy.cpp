#include<iostream>
using namespace std;

int main()
{
    int n,t1,t2,t;

    cin>>t;
    while(t--){
        cin>>t1>>t2;
        t1=t1/3;
        t2=t2/3;
        n=t1*t2;
        cout<<n<<endl;
    }

    return 0;
}
