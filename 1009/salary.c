#include <stdio.h>

int main(){
	char n[20];
	double s, v;
	fgets(n, sizeof n, stdin);
	scanf("%lf\n%lf",&s, &v);
	printf("TOTAL = R$ %.2lf\n", s+v*0.15);
}

