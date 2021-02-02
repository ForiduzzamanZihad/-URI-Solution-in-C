#include <stdio.h>
#include <math.h>

int main()
{
  double r, a;

  scanf("%lf",&r);
   r = r*r;
  a = 3.14159*r;

  printf("A=%0.4lf\n",a);

  return 0;
}
