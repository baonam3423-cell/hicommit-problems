#include <stdio.h>

int main() {
  int XEP_HANG=1;
  switch(XEP_HANG)
  {
    case 1:
      printf("XEP_LOAI XUAT SAC"); break;
    case 2:
      printf("XEP_LOAI GIOI"); break;
    case 3:
      printf("XEP_LOAI KHA"); break;
    case 4:
      printf("XEP_LOAI TRUNG BINH"); break;
    case 5:
      printf("KHONG HOP LE"); break;
    case 6:
      printf("KHONG HOP LE"); break;
    case 7:
      printf("KHONG HOP LE"); break;
    case 8:
      printf("KHONG HOP LE"); break;
    case 9:
      printf("KHONG HOP LE"); break;
    case 10:
      printf("KHONG HOP LE"); break;
    default:
      printf("KHONG HOP LE");
  }
  return 0;
}