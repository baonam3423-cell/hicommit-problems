#include <stdio.h>

int main() {
  float gpa, min;
  int abs;
  scanf("%f %f %d", &gpa, &min, &abs);

  if(abs >= 3)
  {
    printf("FAIL_ATTENDANCE");
    return 0;
  }
  else if(min<4.0)
  {
    printf("FAIL_SUBJECT");
        return 0;
  }
  if(gpa>=8.0 && min>=7.0)
  {
    printf("EXCELLENT");
  }
  else if(gpa>=6.5 && min>=5.0)
  {
    printf("GOOD");
  }
  else if(gpa>=5.0 && min>=4.0)
  {
    printf("PASS");    return 0;
  }
  else{
    printf("FAIL");   
  }
}