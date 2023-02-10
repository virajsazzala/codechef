#include <stdio.h>
#include <time.h>
int main (void) {
	clock_t tStart = clock();

	/* testcases */
	int t, n, a, b;
	scanf("%d", &t);

	/* for every testcase, finding time elapsed*/
	while(t > 0) {
		scanf("%d %d %d", &n, &a, &b);
		printf("%d\n", (2 * (180 + n)) - (a + b));
		t--;
	}

	printf("time taken: %fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
