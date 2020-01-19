#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n,Case=0;
    double t;

    while(scanf("%d",&n)==1){
        if(n<0)
            return 0;
        t=log2(n);
        int i=ceil(t);
        printf("Case %d: %d\n",++Case,i);
    }

    return 0;
}
