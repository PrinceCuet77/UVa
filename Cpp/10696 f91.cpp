#include<iostream>
using namespace std;

long long f91(long long n){
    if(n<=100)
        return f91(f91(n+11));
    else
        return n-10;
}

int main()
{
    long long n,f;

    while(cin>>n){
        if(n==0)
            return 0;
        f=f91(n);
        cout<<"f91("<<n<<") = "<<f<<endl;
    }

    return 0;
}
