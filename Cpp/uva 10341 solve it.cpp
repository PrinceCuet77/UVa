#include<bits/stdc++.h>
#include<math.h>
using namespace std;

double p, q, r, s, t, u;

double func(double x){
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main()
{
    double mid;
    while(scanf("%lf %lf %lf %lf %lf %lf", &p, &q, &r, &s, &t, &u) == 6){
        if(func(0) * func(1) > 0){
            printf("No solution\n");
            continue;
        }
        else{
            double low = 0.0, high = 1.0;
            for(int i = 1; i <= 50; i++){
                mid = (low + high) / 2.0;
                if((func(mid) * func(low)) <= 0)
                    high = mid;
                else
                    low = mid;
            }
        }
        printf("%0.4lf\n",mid);
    }
}

