#include <stdio.h>

int main() {
  int a;
  scanf("%lf", &a);
  if(a >= 9.0)
    printf("A");
  if(8.0 <= a <= 8.9 )
    printf("B+");
  else 
    printf("B");
  return 0;
}