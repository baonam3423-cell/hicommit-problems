#include <stdio.h>

int main() {
  float gpa, min;
  int abs;
  scanf("%f, %f, %d", &gpa, min, abs);

  if(abs>3)
  {
    printf("FAIL_ATTENDANCE", gpa, min, abs);
  }
  else if(min<4.0)
  {
    printf("FAIL_SUBJECT");
  }

  
  return 0;
}