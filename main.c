#include <stdio.h>

int main() {
  
  double w, h, BMI;
  
  scanf("%lf", &w);
  scanf("%lf", &h);

  BMI = w/(h/100)^2);
  
  if (18.5 > BMI )
    {
      printf("UNDERWEIGHI\n", BMI)}
  else if (18.5 <= BMI < 25)
    {
      printf("NORMAL\n", BMI);
    }
  if (25 <= BMI < 30)
    {
      printf("OVERWEIGHT\n", BMI);
    }
  else if (BMI >= 30)
    {
      printf("OBSE\n", BMI);
    }
  return 0;
}