#include <stdio.h>

int main(){
	int y, m, d;
	scanf("%d", &d);
	y = d/365;

	if (d%365 <= 30) m = ((d%365))/30;
	else m = ((d%365)-5)/30;
	
	d = (d%365)%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
}
