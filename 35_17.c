#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int a, r[2] = {35, 17}, b, ans;
	time_t t;
	srand((unsigned)time(&t));

	while(1){
		a = rand() % 21;
		b = r[rand() % 2];
		printf("%d x %d \n", b, a);
		scanf("%d", &ans);
		if(ans != a*b){
			printf("wrong\n");
		}
	}
}
