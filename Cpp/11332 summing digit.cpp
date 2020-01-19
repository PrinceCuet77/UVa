#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int len,i,total,sum;
    char num[15];

    while(cin>>num){
        sum=total=0;
        if(strcmp(num,"0")==0)
            return 0;
        len=strlen(num);
        if(len==1)
            cout<<num<<endl;
        else{
            for(i=0;i<len;i++)
                sum+=(num[i]-'0');
            while(sum!=0){
                total+=sum%10;
                sum/=10;
            }
            sum=0;
            while(total!=0){
                sum+=total%10;
                total/=10;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
