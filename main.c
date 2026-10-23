#include <stdio.h>

int main() {
  int k;
  long long tien = 0;
  scanf("%d", &k);

  if(k <= 50 )
    tien = 1LL * k * 1678;
  
  else if(k <= 100 )
    tien = 50LL * 1678
          + 1LL * (k-50) * 1734;


  printf("%ll\n" tien);
  return 0;
}