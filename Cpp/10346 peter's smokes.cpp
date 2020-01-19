#include<iostream>
using namespace std;

int main()
{
    int cig,butt,sum;

    while(cin>>cig>>butt){
        sum=cig+(cig-1)/(butt-1);
        cout<<sum<<endl;
    }

    return 0;
}
