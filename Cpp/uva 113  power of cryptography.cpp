#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    double p,n,power;

    while(scanf("%lf %lf",&n,&p)==2){
        power=pow(p,1/n);
        printf("%0.lf\n",power);
    }

    return 0;
}
