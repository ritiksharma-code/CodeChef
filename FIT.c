#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d", &t);
	while(t--)
    {
        scanf("%d", &x);
        printf("%d\n", (2*x)*5);
    }
	return 0;
}