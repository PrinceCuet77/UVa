#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
#define N 1000000
using namespace std;

int main()
{
    char num[N],o[N];
    int n,m,len,j,t,T,i,sum,power;
    double p;

    while(cin>>num){
        cin>>n>>m;
        sum=0;
        len=strlen(num);
        power=len-1;
        for(i=0;i<len;i++){
            if(atoi(num)==0){
                cout<<setw(7)<<atoi(num);
                break;
            }
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
            p=pow(n,power);
            sum+=t*(int)p;
            power--;
        }
        i=0;
        if(m<=10){
            while(sum!=0){
                ///cout<<T<<endl;
                T=sum%m;
                sum/=m;
                o[i]=T+'0';
                i++;
            }
            cout<<setw(8-i);
            if(i<8){
                for(j=i-1;j>=0;j--)
                    cout<<o[j];
            }
            else
                cout<<setw(7)<<"ERROR";
        }
        else{
            while(sum!=0){
                T=sum%m;
                sum/=m;
                if(T==10)
                    o[i]='A';
                else if(T==11)
                    o[i]='B';
                else if(T==12)
                    o[i]='C';
                else if(T==13)
                    o[i]='D';
                else if(T==14)
                    o[i]='E';
                else if(T==15)
                    o[i]='F';
                else
                    o[i]=T+'0';
                i++;
            }
            cout<<setw(8-i);
            if(i<8){
                for(j=i-1;j>=0;j--)
                    cout<<o[j];
            }
            else
                cout<<setw(7)<<"ERROR";
        }
        cout<<endl;
    }

    return 0;
}
