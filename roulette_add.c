#include <stdio.h>

int main() {

	int str, spl, cor, six, strt, tot;

	printf("Straights:\n");
	scanf("%d", &str);
	printf("Splits:\n");
	scanf("%d", &spl);
	printf("Corner:\n");
	scanf("%d", &cor);
	printf("Street:\n");
	scanf("%d", &strt);
	printf("Six Line:\n");
	scanf("%d", &six);
	
	tot = (str*35+spl*17+cor*8+strt*11+six*5);
	printf("Total = %d pieces\n", tot);

	return 0;
}
