#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void* a, const void* b) {
  return *(float*)a - *(float*)b;
}

int main(){
  float a, b, c, n[3];

  scanf("%f %f %f", n, n+1, n+2);

  qsort(n, 3, sizeof(float), cmp);

  a = n[2], b = n[1], c = n[0];

  if(a < b+c){
    float a2 = pow(a, 2), bc2 = pow(b, 2) + pow(c,2);

    if (a2 == bc2)
      puts("TRIANGULO RETANGULO");
    else if (a2 > bc2)
      puts("TRIANGULO OBTUSANGULO");
    else if (a2 < bc2)
      puts("TRIANGULO ACUTANGULO");

    if (a == b && b == c) {
      puts("TRIANGULO EQUILATERO");
    } else if (a == b || b == c || c == a) {
      puts("TRIANGULO ISOSCELES");
    }

  } else {
    puts("NAO FORMA TRIANGULO");
  }

}
