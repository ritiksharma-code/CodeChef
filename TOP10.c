#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d", &x);
	    if(x<=10)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}