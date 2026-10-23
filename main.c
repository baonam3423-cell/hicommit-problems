#include <stdio.h>

int main() {
  int XEP_LOAI=10;
  switch(XEP_LOAI)
  {
    case 1:
      printf("XEP_LOAI_XUAT_SAC"); break;
    case 2:
      printf("XEP_LOAI_GIOI"); break;
    case 3:
      printf("XEP_LOAI_KHA"); break;
    case 4:
      printf("XEP_LOAI_TRUNG_BINH"); break;
    case 5: case 6: case 7: case 8: case 9: case 10:
      printf("KHONG_HOP_LE"); break;
  }
  return 0;
}