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
  
  if(6.9 <= a <= 6.5)
    printf("C+");
  else if 
    printf("C");

  if(5.0 <= a <= 5.4)
    printf("D+");
  else if 
    printf("D");

  if(a < 4.0)
    printf("F");
  
  return 0;
}