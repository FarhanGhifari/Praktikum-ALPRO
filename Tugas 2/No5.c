#include <stdio.h>

int main() {

//kamus

int s1, s2, s3;

//Algoritma

printf("masukkan nilai sisi 1: ");
scanf("%d", &s1);
printf("masukkan nilai sisi 2: ");
scanf("%d", &s2);
printf("masukkan nilai sisi 3: ");
scanf("%d", &s3);

  if(s1<=0 || s2<=0 || s3<=0) {
    printf("terdapat nilai yang bukan sisi segitiga");
  }
  else if (s1 == s2 && s2 == s3) {
    printf("segitiga sama sisi");
  }
  else if (s1 == s2 || s2 == s3 || s1 ==s3) {
    printf("segitiga sama kaki");
  }
  else {  

    printf("segitiga sembarang");
  }

 return 0;
}
