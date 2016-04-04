#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, d, x1, x2;

	scanf("%lf %lf %lf", &a, &b, &c);

	d = b *b - 4 * a * c;

	if (d < 0 || !a) {
		printf("Impossivel calcular\n");
		return 0;
	}

	if (d == 0) {
		x1 = x2 = (b * -1 - sqrt(d)) / (2 * a);
	}else {
		x1 = (b * -1 + sqrt(d)) / (2 * a);
		x2 = (b * -1 - sqrt(d)) / (2 * a);
	
	}
	printf("R1 = %.5f\n", x1);
	printf("R2 = %.5f\n", x2);
}
