#include <stdio.h>

int main() {
  int a;
  scanf("%lf", &a);
  if(10 > a >= 9.0)
    printf("A");
  
  if(8.0 <= a <= 8.9 )
    printf("B+");
  else (7.0 <= a <= 7.9)
    printf("B");
  
  if(6.5 <= a <= 6.9)
    printf("C+");
  else if (6.5 <= a <= 6.9)
    printf("C");

  if(5.0 <= a <= 5.4)
    printf("D+");
  else if (4.0 <= a <= 4.9)
    printf("D");

  if(a < 4.0)
    printf("F");
  
  return 0;
}