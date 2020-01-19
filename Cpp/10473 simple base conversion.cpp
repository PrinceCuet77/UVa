#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define N 100
using namespace std;

int main()
{
    char test[N],o[N],ss[N];
    int l,k,t,i,len,j;
    long long sum;

    while(cin>>test){
        len=strlen(test);
        sum=i=0;
        if(atoi(test)<0)
            return 0;
        else if(test[0]=='0' && test[1]=='x'){
            for(i=2;i<len;i++){
                if(test[i]=='A')
                    sum=sum*16+10;
                else if(test[i]=='B')
                    sum=sum*16+11;
                else if(test[i]=='C')
                    sum=sum*16+12;
                else if(test[i]=='D')
                    sum=sum*16+13;
                else if(test[i]=='E')
                    sum=sum*16+14;
                else if(test[i]=='F')
                    sum=sum*16+15;
                else
                    sum=sum*16+(test[i]-'0');
            }
            cout<<sum<<endl;
        }
        else if(atoi(test)>=0){
            sum=atoi(test);
            cout<<"0x";
            if(sum==0)
                cout<<sum;
            while(sum!=0){
                l=sum%16;
                sum/=16;
                if(l==10)
                    o[i]='A';
                else if(l==11)
                    o[i]='B';
                else if(l==12)
                    o[i]='C';
                else if(l==13)
                    o[i]='D';
                else if(l==14)
                    o[i]='E';
                else if(l==15)
                    o[i]='F';
                else
                    o[i]=l+'0';
                i++;
            }
            for(j=i-1,k=0;j>=0;j--,k++)
                ss[k]=o[j];
            ss[k]='\0';
            cout<<ss<<endl;
        }
    }

    return 0;
}
