#include <stdio.h>
int main(void) {
	
	/* testcases */
	int t, y, a, x;
	scanf("%d", &t);
	
	/* for every testcase, verify eligiblity*/
	while (t > 0) {
		scanf("%d %d %d", &x, &y, &a);
		if (a >= x && a < y)
			puts("YES");
		else
			puts("NO");
		t--;
	}

	return 0;
}
