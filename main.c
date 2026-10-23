#include <stdio.h>

int main() {
  int a;
  scanf("%lf", &a);
  if(10 > a >= 9.0)
    printf("A");
  if(8.0 <= a <= 8.9 )
    printf("B+");
  else 
    printf("B");
  if(6.5 > a > 6.9)
    printf("C+");
  else 
    printf("C");
  return 0;
}