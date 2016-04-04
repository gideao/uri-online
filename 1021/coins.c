#include <stdio.h>

int main(){
	int a, b, i, n[] = { 100, 50, 20, 10, 5, 2, 100, 50, 25, 10, 5, 1};
	
	scanf("%d.%d", &a, &b);

	printf("NOTAS:\n");
	for(i = 0; i < 6; i++){
		printf("%d nota(s) de R$ %.2f\n", a / n[i], n[i]/1.0);
		a = a % n[i];
	}
	
	printf("MOEDAS:\n");
	b = a * 100 + b;
	for(; i < 12; i++){
		printf("%d moeda(s) de R$ %.2f\n", b / n[i], n[i]/100.0);
		b = b % n[i];

	}
}

