#include <stdio.h>

int main() {
  int d, m, y;
  scanf("%d %d %d", &d, &m, &y);


  if((1<=d && d<=31) && (m == 1 || m == 3 || m == 5 || m== 7|| m == 8|| m == 10|| m ==12))
  {
    printf("VALID");
  }

  else if((1<d && d<= 30) && (m==4 || m==6 || m== 9|| m == 11))
  {
    printf("VALID");
  }
  
  
  
  else
  {
    printf("INVALID");
  }
  return 0;
}