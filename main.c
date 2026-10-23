#include <stdio.h>

int main() {
  int a;
  scanf("%lf", &a);
  if(10 > a >= 9.0)
    printf("\nA");
  if(8.0 <= a <= 8.9 )
    printf("\nB+");
  else 
    printf("\nB");
  if(6.5 > a > 6.9)
    printf("\nC+");
  else 
    printf("\nC");
  return 0;
}