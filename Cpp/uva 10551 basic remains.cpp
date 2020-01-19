#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;

long long To_Decimal(string a,int n){
    int power=a.length()-1,r=0;
    double d;
    for(int i=0;i<a.length();i++){
        d=pow(n,power);
        r+=((a.at(i)-'0')*(int)d);
        power--;
    }
    return r;
}

void To_Given(long long p,int n){
    long long t;
    char ch[20];
    int i=0;
    while(1){
        t=p%n;
        p/=n;
        ch[i]=t+'0';
        i++;
        if(p==0)
            break;
    }
    for(int j=i-1;j>=0;j--)
        cout<<ch[j];
    cout<<endl;
}

int main()
{
    string p,m;
    int n;
    long long K,P;

    while(scanf("%d",&n),n){
        cin>>p>>m;
        K=To_Decimal(m,n);
        P=0;
        for(int i=0;i<p.length();i++){
            P*=n;
            P+=(p.at(i)-'0');
            P%=K;
        }
        To_Given(P,n);
    }

    return 0;
}
