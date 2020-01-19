#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4,t1,t2;

    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
        if(x2==x3 && y2==y3){
            t1=(x1+x4)-x2;
            t2=(y1+y4)-y2;
            printf("%.3lf %.3lf\n",t1,t2);
        }
        else if(x1==x2 && y1==y2){
            t1=(x4+x3)-x1;
            t2=(y4+y3)-y1;
            printf("%.3lf %.3lf\n",t1,t2);
        }
        else if(x1==x3 && y1==y3){
            t1=(x2+x4)-x1;
            t2=(y2+y4)-y1;
            printf("%.3lf %.3lf\n",t1,t2);
        }
        else if(x1==x4 && y1==y4){
            t1=(x2+x3)-x1;
            t2=(y2+y3)-y1;
            printf("%.3lf %.3lf\n",t1,t2);
        }
        else if(x2==x4 && y2==y4){
            t1=(x1+x3)-x2;
            t2=(y1+y3)-y2;
            printf("%.3lf %.3lf\n",t1,t2);
        }
        else if(x3==x4 && y3==y4){
            t1=(x4+x3)-x3;
            t2=(y4+y3)-y3;
            printf("%.3lf %.3lf\n",t1,t2);
        }
    }

    return 0;
}
