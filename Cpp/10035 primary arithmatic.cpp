#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main()
{
    char num[15],num1[15],extra[15];
    int i,c,len,len1,carry,a,b;

    cin>>num;
    a=atoi(num);
    cout<<setw(7)<<a<<endl;

    while(cin>>num>>num1){
        if(num[0]=='0' && num1[0]=='0')
            return 0;
        carry=c=0;
        if(strcmp(num,num1)<0){
            strcpy(extra,num);
            strcpy(num,num1);
            strcpy(num1,extra);
        }
        len=strlen(num);
        len1=strlen(num1)-1;
        for(i=len-1;i>=0;i--){
            a=(num[i]-'0');
            if(len1>=0){
                b=(num1[len1]-'0');
                len1--;
            }
            a+=c;
            if(a+b>9){
                c=1;
                carry++;
            }
            else
                c=0;
            a=b=0;
        }
        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<carry<<" carry operation."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;
    }

    return 0;
}
