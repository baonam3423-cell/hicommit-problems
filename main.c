#include <stdio.h>

int main() {
  int w, h;
  float BMI;

  printf("\nNhap can nang: ");
  scanf("%f", &w);

  printf("\nNhap chieu cao: ");
  scanf("%f", &h);

  printf("\n %f/(%.1f/100)^2 = %.1f", w,h, w/(h/100)^2)
  
  if (BMI < 18.5 )
    {
      printf("UNDERWEIGHI", BMI)
    }
  
  return 0;
}