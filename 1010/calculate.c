#include <stdio.h>

int main(){
	int n;
	float v, s = 0;
	scanf("%*d %d %f", &n, &v);
	s = v*n;
	scanf("%*d %d %f", &n, &v);
	s += v*n;
	printf("VALOR A PAGAR: R$ %.2f\n",s);
}
