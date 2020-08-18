#include <stdio.h>
int main(void)
{
  float b,h,area;
  printf("Enter Base : ");
  scanf("%f", &b);		 
  printf("Enter High : ");
  scanf("%f", &h);		   
  area = 0.5*b*h;		 
  printf(" Triangle Area = %f", area); 
  return 0;
}
