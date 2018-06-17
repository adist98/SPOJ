#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   double r1,r2,r3,r4;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%lf%lf%lf",&r1,&r2,&r3);   
      double den=((r1*r2)+(r1*r3)+(r2*r3)+2*(sqrt((r1*r2*r3)*(r1+r2+r3))));
      r4=((r1*r2*r3)/den);
      printf("%lf\n",r4);
   }
   return 0;
}
