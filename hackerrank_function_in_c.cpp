#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int  max_of_four(int ,int ,int ,int );

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
  int max_of_four(int x,int y,int z,int k)
  {
   if(x>y&&x>z&&x>k)
   return x;
   else if(y>x&&y>z&&y>k)
   return y;
   else if(z>x&&z>y&&z>k)
   return z;
   else 
   return k;
  }
