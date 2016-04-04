#include <stdio.h>

int main(){
  float m = 0, f, n, e;
  int i, p[] = {2, 3, 4, 1};


  for (i = 0, n = 0; i < 4; ++i) {
    scanf("%f", &n);
    m += n * p[i];
  }

  printf("Media: %.1f\n", m/=10);

  if (m >= 7) {
    puts("Aluno aprovado.");
  } else if (m < 7 && m >= 5) {
    puts("Aluno em exame.");
    scanf("%f", &f);

    printf("Nota do exame: %.1f\n", f);
    if ((e=(m+f)/2) >= 5)
      puts("Aluno aprovado.");
    else
      puts("Aluno reprovado.");
    printf("Media final: %.1f\n", e);

  } else
    puts("Aluno reprovado.");
}
