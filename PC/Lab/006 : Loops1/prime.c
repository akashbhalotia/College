//created by akashbhalotia
#include <stdio.h>

int main()
{
    int m, n, c, i, j;


    printf("Enter the range\n");
    scanf("%d%d", &m, &n);


    printf("\nPrime numbers:\n");

    for (i = m + 1; i < n; i++)
    {

        c = 0;

        for (j = 1; j <= i; j++)
        {

            if (i % j == 0)

                c++;

        }

        if (c == 2)

            printf("%d,", i);

    }


    printf("\n");

    return 0;

}
