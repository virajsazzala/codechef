/* https://www.codechef.com/problems/AVG */

#include <stdio.h>
int main (void) {
	/* testcases */
	int t, n, k, v;
	scanf("%d", &t);

	/* for every testcase, finding k */
	while(t > 0) {
		int sum_n, i, an, x;
			scanf("%d %d %d", &n, &k, &v);
		
		/* getting the sum of n numbers */
		for(an = sum_n = i = 0;     /* intialization */
			i < n;                  /* condition */
			i++, (sum_n += an))     /* incrementation */
			scanf("%d", &an);       /* in forloop, getting An */
				
		/* the value of k can be found by:
		* val_k = (((v * (n + k)) - sum_n)) / k;
		*/
		x = (((v * (n + k)) - sum_n));
		if (x % k == 0 && x > 0)
			printf("%d\n", x/k);
		else
			printf("%d\n", -1);
		
		t--;
	}

	return 0;
}
