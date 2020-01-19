#include<iostream>
#include<string.h>
#include<math.h>
#include<cstdio>
using namespace std;

int main()
{
    int test,num,sum1,sum2,len,i,j,power,t,temp;
    char ch,n1[5],n2[5],num1[15],num2[15];
    double p;

    cin>>test;
    while(test--){
        scanf("%s",n1);
        cin>>ch;
        scanf("%s",n2);
        sum1=0;
        len=strlen(n1);
        power=len-1;
        for(i=0;i<len;i++){
            if(n1[i]=='A')
                t=10;
            else if(n1[i]=='B')
                t=11;
            else if(n1[i]=='C')
                t=12;
            else if(n1[i]=='D')
                t=13;
            else if(n1[i]=='E')
                t=14;
            else if(n1[i]=='F')
                t=15;
            else
                t=(n1[i]-'0');
            p=pow(16,power);
            sum1+=t*(int)p;
            power--;
        }
        len=power=t=sum2=0;
        len=strlen(n2);
        power=len-1;
        for(i=0;i<len;i++){
            if(n2[i]=='A')
                t=10;
            else if(n2[i]=='B')
                t=11;
            else if(n2[i]=='C')
                t=12;
            else if(n2[i]=='D')
                t=13;
            else if(n2[i]=='E')
                t=14;
            else if(n2[i]=='F')
                t=15;
            else
                t=(n2[i]-'0');
            p=pow(16,power);
            sum2+=t*(int)p;
            power--;
        }
        if(ch=='+')
            num=sum1+sum2;
        else{
            if(sum1<sum2){
                num=sum2-sum1;
                temp=sum1;
                sum1=sum2;
                sum2=temp;
            }
            else
                num=sum1-sum2;
        }
        i=0;
        while(sum1!=0){
            t=sum1%2;
            sum1/=2;
            num1[i]=t+'0';
            i++;
        }
        for(j=i;j<=12;j++)
            num1[j]='0';
        for(j=12;j>=0;j--)
            cout<<num1[j];
        cout<<" "<<ch<<" ";
        i=0;
        while(sum2!=0){
            t=sum2%2;
            sum2/=2;
            num2[i]=t+'0';
            i++;
        }
        for(j=i;j<=12;j++)
            num2[j]='0';
        for(j=12;j>=0;j--)
            cout<<num2[j];
        cout<<" = "<<num<<endl;
    }

    return 0;
}
