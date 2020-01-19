#include<iostream>
using namespace std;

int main()
{
    long long a,b,i,k,c,s,temp;

    while(cin>>a>>b){
        s=0;
        cout<<a<<" "<<b<<" ";
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a;i<=b;i++){
            k=i;
            c=1;
            while(k>1){
                if(k%2==0LL)
                    k=k/2;
                else
                    k=3*k+1;
            c++;
            }
            if(s<=c)
                s=c;
        }
        cout<<s<<endl;
    }

    return 0;
}
