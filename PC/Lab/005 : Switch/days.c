//created by akashbhalotia
#include <stdio.h>

int main() 
{

    int days = 0, m, y;

    printf("Enter month and year\n");
    scanf("%d%d", &m, &y);

    if (m < 1 || m > 12 || y < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    switch (m) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
            
        case 2:
            days = (y % 4 == 0) ? ((y % 100 == 0) ? ((y % 400 == 0) ? 29 : 28) : 29) : 28;
            break;

        default:
            days = 30;
    }
    
    printf("Days = %d\n", days);

    return 0;
}
