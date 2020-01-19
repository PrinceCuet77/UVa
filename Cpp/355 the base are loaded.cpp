#include<iostream>
#include<string.h>
#define N 100
using namespace std;

int main()
{
    char num[N],o[N];
    int j,i,n,t,m,len,flag,s;
    long long sum;

    while(cin>>n>>m>>num){
        flag=sum=0;
        len=strlen(num);
        for(i=0;i<len;i++){
            if(num[i]=='A')
                t=10;
            else if(num[i]=='B')
                t=11;
            else if(num[i]=='C')
                t=12;
            else if(num[i]=='D')
                t=13;
            else if(num[i]=='E')
                t=14;
            else if(num[i]=='F')
                t=15;
            else
                t=(num[i]-'0');
            sum=sum*n+t;
            if(t>=n)
                break;
            flag++;
        }
        if(flag==len){
            cout<<num<<" base "<<n<<" = ";
            if(sum==0)
                cout<<sum;
            else{
                i=0;
                while(sum!=0){
                    s=sum%m;
                    sum/=m;
                    if(s==10)
                        o[i]='A';
                    else if(s==11)
                        o[i]='B';
                    else if(s==12)
                        o[i]='C';
                    else if(s==13)
                        o[i]='D';
                    else if(s==14)
                        o[i]='E';
                    else if(s==15)
                        o[i]='F';
                    else
                        o[i]=s+'0';
                    i++;
                }
                for(j=i-1;j>=0;j--)
                    cout<<o[j];
            }
            cout<<" base "<<m<<endl;
        }
        else
            cout<<num<<" is an illegal base "<<n<<" number"<<endl;
    }

    return 0;
}
