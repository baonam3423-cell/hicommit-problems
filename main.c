#include <stdio.h>

int main() {
  
  double w, h;
  float BMI;
  scanf("%lf %lf", &w,&h);

  BMI = w/((h/100)*(h/100));
  
  if (18.5 > BMI )
      printf("UNDERWEIGHT");
  else if ( BMI < 25)
      printf("NORMAL");
  else if (BMI < 30)
      printf("OVERWEIGHT");
  else
      printf("OBESE");
  return 0;
}