#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c,ct=0;
    int t;

    cin>>t;
    while(t--){
        ct++;
        cin>>a>>b>>c;
        if((a==0) && (b==0) && (c==0))
            cout<<"Case "<<ct<<": "<<"Invalid"<<endl;
        else if(((a+b)<=c) || ((b+c)<=a) || ((a+c)<=b))
            cout<<"Case "<<ct<<": "<<"Invalid"<<endl;
        else if((a==b) && (b==c) && (a==c))
            cout<<"Case "<<ct<<": "<<"Equilateral"<<endl;
        else if((a==b) || (b==c) || (c==a))
            cout<<"Case "<<ct<<": "<<"Isosceles"<<endl;
        else if((a!=b) && (b!=c) && (c!=a))
            cout<<"Case "<<ct<<": "<<"Scalene"<<endl;
    }

    return 0;
}
