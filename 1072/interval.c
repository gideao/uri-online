#include <stdio.h>

int main(){
  long long int x;
  int i, n, in = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++){
    scanf("%lli", &x);
    if (x >= 10 && x <= 20) in++;
  }

  printf("%d in\n%d out\n", in, n-in);
}
