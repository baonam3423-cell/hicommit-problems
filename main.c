#include <stdio.h>

int main() {
  double w, h;
  float BMI;

  printf("\nNhap can nang: ");
  scanf("%f", &w);
  printf("\nNhap chieu cao: ");
  scanf("%.1f", &h);

  printf("\n %f/(%.1f/100)^2 = %.1f", w,h, w/(h/100)^2)
  
  if (18.5 > BMI )
    {
      printf("UNDERWEIGHI", BMI)}
    
  
  return 0;
}