#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a[50], s, k, bit[10], total=0, count=0;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d%d", &s, &k);
	    for(int i=0; i<s; i++)
	    {
	        scanf("%d", &a[i]);
	    }
	    for(int i=0; i<=(s/k)+1; i++)
	    {
	        bit[i]=a[i]|a[i+1];
	    }
	    for(int i=0; i<10; i++)
	    {
	        if(a[i]%2==0)
	        {
	        }
	        else
	        {
	            count++;
	        }
	    }
	    printf("%d", count);
	    
	}
	return 0;   
}

