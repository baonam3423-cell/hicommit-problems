#include <stdio.h>

int main() {
  int XEP_HANG=1;
  switch(XEP_HANG)
  {
    case 1:
      printf("XEP_LOAI_XUAT_SAC"); break;
    case 2:
      printf("XEP_LOAI_GIOI"); break;
    case 3:
      printf("XEP_LOAI_KHA"); break;
    case 4:
      printf("XEP_LOAI_TRUNG_BINH"); break;
    case 5:
      printf("KHONG_HOP_LE"); break;
    case 6:
      printf("KHONG_HOP_LE"); break;
    case 7:
      printf("KHONG_HOP_LE"); break;
    case 8:
      printf("KHONG_HOP_LE"); break;
    case 9:
      printf("KHONG_HOP_LE"); break;
    case 10:
      printf("KHONG-HOP_LE"); break;
    default:
      printf("KHONG_HOP_LE");
  }
  return 0;
}