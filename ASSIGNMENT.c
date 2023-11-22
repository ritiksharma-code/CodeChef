#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d%d%d", &x, &y, &z);
	    z=z*24*60;
	    if((x*y)<=z)
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

