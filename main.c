#include <stdio.h>

int main() {
  int w, h;
  float BMI;

  printf("\nNhap can nang: ");
  scanf("%d", &w);

  printf("\nNhap chieu cao: ");
  scanf("%d", &h);

  printf("\n %d/(%d./100)^2 = %.1f", w,h, w/(h/100)^2)
  

  
  return 0;
}