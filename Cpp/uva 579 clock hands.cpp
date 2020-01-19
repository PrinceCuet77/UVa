#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    double t;

    while((scanf("%d%*c%d",&h,&m)==2),(h||m)){
        t=0.5*(60*h-11*m);
        if(t<0)
            t=(-t);
        if(t>180)
            t=360-t;
        printf("%.3lf\n",t);
    }

    return 0;
}
