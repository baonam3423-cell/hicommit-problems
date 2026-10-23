#include <stdio.h>

int main() {
  int k;
  long long tien = 0;
  scanf("%d", &k);

  if(k <= 50 )
    tien = 1LL * k * 1687;
  
  else if(k <= 100 )
    tien = 50LL * 1687
          + 1LL * (k-50) * 1734;


  
  return 0;
}