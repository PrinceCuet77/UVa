#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,q,i,lowest,highest,middle,a[10010],b[10010],ht,casen=0;

    while(cin>>n>>q){
        if(n==0 && q==0)
            return 0;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<q;i++)
            cin>>b[i];
        cout<<"CASE# "<<++casen<<":"<<endl;
        for(i=0;i<q;i++){
            if(b[i]<a[0]){
                cout<<b[i]<<" not found"<<endl;
                continue;
            }
            else if(b[i]>a[n-1]){
                cout<<b[i]<<" not found"<<endl;
                continue;
            }
            else{
                ht=b[i];
                lowest=0;
                highest=n-1;
                while(lowest<=highest){
                    middle=(lowest+highest)/2;
                    if(a[middle]<ht)
                        lowest+=1;
                    else if(a[middle]>ht)
                        highest-=1;
                    else{
                        if(a[middle-1]==ht)
                            highest=middle;
                        else
                            break;
                    }
                }
            }
            if(lowest<=highest)
                cout<<ht<<" found at "<<middle+1<<endl;
            else
                cout<<ht<<" not found"<<endl;
        }
    }

    return 0;
}
