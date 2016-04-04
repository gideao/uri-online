#include <stdio.h>

int main(){
  long long int x;
  int i, n;

  scanf("%d", &n);

  for (i = 0; i < n; i++){
    scanf("%lli", &x);
    if (x){
      if (x % 2) printf("ODD ");
      else printf("EVEN ");

      if (x > 0) puts("POSITIVE");
      else puts("NEGATIVE");
    }
    else puts("NULL");
  }

}
