#include<iostream>
using namespace std;

int main()
{
    int n,total=0;

    while(cin>>n){
        total=n;
        if(n==1)
            cout<<total<<endl;
        else{
            while(n!=0){
                n-=3;
                n++;
                total++;
                if(n==1)
                    break;
            }
        cout<<total<<endl;
        }
    }

    return 0;
}
