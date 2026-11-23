#include <stdio.h>

int main() {
  int d, m, y;
  scanf("%d %d %d", &d, &m, &y);

  if(1<= m <= 12)
  {
    printf("VALID");
  }
  else if(1<=d<=(m,y))
  {
    printf("VALID");
  }
    return 0;
  if((1<=d && d<=31) && (m == 1 || m == 3 || m == 5 || m== 7|| m == 8|| m == 10|| m ==12))
  {
    printf("VALID");
  }
  return 0;
  if ((m=2 && y%400 == 0) 
      ||(m=2 && y%4 == 0 && y%100 != 0))
  {
    printf("VALID");
  }
  else
  {
    printf("INVALID");
  }
  return 0;
}