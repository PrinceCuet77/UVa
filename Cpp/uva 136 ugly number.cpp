#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,cnt=0,t;

    for(long i=1;i<10000;i++){
        if(i==1)
            cnt++;
        else if(i%2==0 && i%7!=0)
            cnt++;
        else if(i%3==0 && i%7!=0)
            cnt++;
        else if(i%5==0 && i%7!=0)
            cnt++;
        if(cnt==11){
            t=i;
            break;
        }
    }
    printf("The 1500'th ugly number is %ld.",t);

    return 0;
}
