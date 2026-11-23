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
  if(1<=d<=5 && d!=2 
     || 7<=d<=12 && d==2 )
  {
    printf("VALID");
  }
  return 0;
  if(m=2 && y==400 
      ||m2 && y==4 && y!=100)
  {
    printf("VALID");
  }
  else
  {
    printf("INVALID");
  }
  return 0;
}