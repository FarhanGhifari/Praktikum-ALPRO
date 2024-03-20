#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int m;
    int v;
    int r;
    float F;

    printf("masukan m : ");
        scanf("%d" ,&m);
    printf("masukan v : ");
        scanf("%d" ,&v);
    printf("masukan r : ");
        scanf("%d" ,&r);

    F = m*(v*v/r);

    printf("Hasil gaya : %f",F);


}