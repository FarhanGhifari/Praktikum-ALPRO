#include <stdio.h>

int main() {
  int m, v, r;
  float F;
  printf("Masa dalam kg:(m)");
  scanf("%d", &m);
  printf("Kecepatan dalam m/s:(v):");
  scanf("%d", &v);
  printf ("Masukan jari jari:");
  scanf("%d", &r);

    //Menghitung gaya
    F=m*v*v/r;
  printf("Gaya:%.2f N", F);
  return 0;
}
    
  