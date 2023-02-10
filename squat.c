#include <stdio.h>
#define SET 15

int main (void) {
	
	/* testcases */
	int t, x;
	scanf("%d", &t);

	/* for every testcase, get total squats */
	while (t > 0) {
		scanf("%d", &x);
		printf("%d\n", (x * SET));	
		t--;
	}

	return 0;
}
