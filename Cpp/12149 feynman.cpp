#include<iostream>
using namespace std;

int main()
{
    long long sum;
    int n;

    while(cin>>n){
        if(n==0)
            return 0;
        sum=0;
        while(n!=0){
            sum+=n*n;
            n--;
        }
        cout<<sum<<endl;
    }

    return 0;
}
