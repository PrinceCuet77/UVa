#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n,caseN=0;
    double x,z,y,u,v,t,s,a,p;

    while(cin>>n){
        caseN++;
        p=0;
        if(n==0)
            return 0;
        else{
            cin>>x>>y>>z;
            if(n==1){
                u=x;
                v=y;
                t=z;
                a=(v-u)/t;
                s=u*t+0.5*a*t*t;
                printf("Case %d: %.3lf %.3lf\n",caseN,s,a);
            }
            else if(n==2){
                u=x;
                v=y;
                a=z;
                t=(v-u)/a;
                s=u*t+0.5*a*t*t;
                printf("Case %d: %.3lf %.3lf\n",caseN,s,t);
            }
            else if(n==3){
                u=x;
                a=y;
                s=z;
                p=u*u+2*a*s;
                v=sqrt(p);
                t=(v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",caseN,v,t);
            }
            else if(n==4){
                v=x;
                a=y;
                s=z;
                p=v*v-2*a*s;
                u=sqrt(p);
                t=(v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",caseN,u,t);
            }
        }
    }

    return 0;
}
