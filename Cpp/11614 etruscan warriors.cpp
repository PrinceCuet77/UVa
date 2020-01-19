#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n;
    int test;

    cin>>test;
    while(test--){
        cin>>n;
        n=8*n+1;
        n=sqrt(n)-1;
        n/=2;
        cout<<n<<endl;
    }

    return 0;
}
