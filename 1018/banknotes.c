#include <stdio.h>

int main(){
	int v, i, n[] = {100, 50, 20, 10, 5, 2, 1};
	scanf("%d", &v);
	
	printf("%d\n", v);

	for(i = 0; i < 7; i++){
		printf("%d nota(s) de R$ %d,00\n",v/n[i] ,n[i]);
		v = v%n[i];
	}
}
