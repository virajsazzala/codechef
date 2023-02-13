#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t > 0) {
	    int mr, mg, mb, k, r, g, b;
	    r = g = b = 0;
	    scanf("%d %d %d %d", &mr, &mg, &mb, &k);
        while(r < k && g < k && b < k) {
            if(r < mr && r != k) {
                if(++r == k)
                    break;
            }
            if(g < mg && g != k) {
                if(++g == k)
                    break;
            }
            if(b < mb && b != k){
                if(++b == k)
                    break;
            }
        }
        
        printf("%d\n", r+b+g);
        
	    t--;
	}
	return 0;
}

