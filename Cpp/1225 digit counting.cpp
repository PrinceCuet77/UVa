#include<iostream>
using namespace std;

int main()
{
    int n,num,a[10],t,i,sum;

    cin>>n;
    while(n--){
        for(i=0;i<10;i++)
            a[i]=0;
        cin>>num;
        for(i=num;i>0;i--){
            sum=i;
            while(sum!=0){
                t=sum%10;
                sum/=10;
                if(t==0)
                    a[t]++;
                else if(t==1)
                    a[t]++;
                else if(t==2)
                    a[t]++;
                else if(t==3)
                    a[t]++;
                else if(t==4)
                    a[t]++;
                else if(t==5)
                    a[t]++;
                else if(t==6)
                    a[t]++;
                else if(t==7)
                    a[t]++;
                else if(t==8)
                    a[t]++;
                else if(t==9)
                    a[t]++;
            }
        }
        for(i=0;i<10;i++){
            cout<<a[i];
            if(i==9)
                cout<<endl;
            else
                cout<<" ";
        }
    }

    return 0;
}
