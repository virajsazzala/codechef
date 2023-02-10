#include <stdio.h>
int main (void) {
	/* testcases */
	int t, num, dig;
	scanf("%d", &t);

	/* for every testcase, find no. of 4s*/
	while(t > 0) {
		scanf("%d", &num);
		
		int fc = 0;
		while(num > 0) {
			dig = num % 10;
			if(dig == 4)
				++fc;
			num = num / 10;
		}
		
		printf("%d\n", fc);
		t--;
	}
	return 0;
}
