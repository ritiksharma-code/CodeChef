#include <stdio.h>

int t, n, i, chef=0, chefina=0;
char A[20], B[20];
int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        scanf("%s", A);
        scanf("%s", B);
        for(i=0; i<n;i++)
        {
            if(A[i]==B[i])
            {
            }
            else if(A[i]=='R'&&B[i]=='S')
            {
                chef++;
            }
            else if(A[i]=='S'&&B[i]=='R')
            {
                chefina++;
            }
            else if(A[i]=='S'&&B[i]=='P')
            {
                chef++;
            }
            else if(A[i]=='P'&&B[i]=='S')
            {
                chefina++;
            }
            else if(A[i]=='P'&&B[i]=='R')
            {
                chef++;
            }
            else if(A[i]=='R'&&B[i]=='P')
            {
                chefina++;
            }
        }
        if(chef>chefina)
        {
            printf("0\n");
            chef=0;
            chefina=0;
        }
        else if(chef==chefina)
        {
            printf("1\n");
            chef=0;
            chefina=0;
        }
        else if(chefina>chef)
        {
            printf("%d\n", chefina-chef);
            chef=0;
            chefina=0;
        }
    }
    return 0;
}