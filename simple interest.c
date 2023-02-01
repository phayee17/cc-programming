//program of finding simple interest
#include <stdio.h>
int main()
{
  float P,R,T,SI;
  printf("Enter p,r,and t values\n");
  scanf("%f%f%f,&P,&R,&T");
  SI=(P*T*R)/100;
  printf("Simple Interest=%f\n",SI);
  return 0;
  }
