#include<iostream>
using namespace std;

int main()
{
    int t,mark[10],sum,ct=0,i;

    cin>>t;
    while(t--){
        sum=0;
        for(i=0;i<=6;i++)
            cin>>mark[i];
        if((mark[4]<=mark[5]) && (mark[4]<=mark[6]))
            sum=(mark[5]+mark[6])/2;
        else if((mark[5]<=mark[6]) && (mark[5]<=mark[4]))
            sum=(mark[4]+mark[6])/2;
        else if((mark[6]<=mark[5]) && (mark[6]<=mark[4]))
            sum=(mark[5]+mark[4])/2;
        for(i=0;i<4;i++)
            sum+=mark[i];
        ct++;
        if(sum>=90)
            cout<<"Case "<<ct<<": "<<"A"<<endl;
        else if((sum<90) && (sum>=80))
            cout<<"Case "<<ct<<": "<<"B"<<endl;
        else if((sum<80) && (sum>=70))
            cout<<"Case "<<ct<<": "<<"C"<<endl;
        else if((sum<70) && (sum>=60))
            cout<<"Case "<<ct<<": "<<"D"<<endl;
        else
            cout<<"Case "<<ct<<": "<<"F"<<endl;
    }

    return 0;
}
