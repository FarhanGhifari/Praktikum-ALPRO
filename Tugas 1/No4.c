#include <stdio.h>

int main() {
  int r;
  float Vb, Vk;
  const float PHI = 3.1415;
  printf("Masukan jari jari:");
  scanf("%d", &r);
  //Menghitung Volume Bola
  Vb = 4/3*PHI*r*r*r;
  //Menghitung Volume kerucut
  Vk = 1/2*Vb;
  printf("Volume Bola Kerucut:%.2f\n, Vk");

  return 0;
}
  