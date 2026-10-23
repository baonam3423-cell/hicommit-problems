#include <stdio.h>

int main() {
  
  double w, h;
  float BMI;
  scanf("%lf %if", &w,&h);

  BMI = w/((h/100)*(h/100));
  
  if (18.5 > BMI )
      printf("UNDERWEIGHI");
  else if (18.5 <= BMI < 25)
    {
      printf("NORMAL");
    }
  if (25 <= BMI < 30)
    {
      printf("OVERWEIGHT");
    }
  else if (BMI >= 30)
    {
      printf("OBSE");
    }
  return 0;
}