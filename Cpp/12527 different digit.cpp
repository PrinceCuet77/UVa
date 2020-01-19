#include<iostream>
using namespace std;

int main()
{
    int n,m,i,t,j,l,countN,flag,ck,k,sum;
    char a[5];

    while(cin>>n>>m){
        countN=0;
        for(i=n;i<=m;i++){
            j=0;
            sum=i;
            while(sum!=0){
                t=sum%10;
                sum/=10;
                a[j]=t+'0';
                j++;
            }
            flag=0;
            if(j==1)
                countN++;
            else if(j>1){
                for(l=0;l<j;l++){
                    ck=(a[l]-'0');
                    for(k=l+1;k<j;k++){
                        if(ck==(a[k]-'0')){
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0)
                    countN++;
            }
        }
        cout<<countN<<endl;
    }

    return 0;
}
