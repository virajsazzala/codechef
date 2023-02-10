#include <stdio.h>
int main (void) {
	/* testcases */
	int t, n, a, b;
	scanf("%d", &t);

	/* for every testcase, finding time elapsed*/
	while(t > 0) {
		scanf("%d %d %d", &n, &a, &b);
		printf("%d\n", (2 * (180 + n)) - (a + b));
		t--;
	}
	return 0;
}
