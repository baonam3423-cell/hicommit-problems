#include <stdio.h>

int main() {
  double d;
  double t;
  if(d <= 1)
  {
    t= d * 15000 ;
  }
  else (1 < d <= 5)
  {
    t = 1 * 15000 + (d-1) * 13000 ; 
  }
  

  printf("%d", t);
  return 0;
}