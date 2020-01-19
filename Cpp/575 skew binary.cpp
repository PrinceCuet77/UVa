#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    long long sum,p;
    int len,power,i;
    char bin[40];
    double t;

    while(cin>>bin){
        if(bin[0]=='0')
            break;
        sum=0;
        power=len=strlen(bin);
        for(i=0;i<len;i++){
            if(bin[i]>'0'){
                t=pow(2,power);
                p=(bin[i]-'0')*(t-1);
                sum+=p;
            }
            power--;
        }
        cout<<sum<<endl;
    }

    return 0;
}
