//created by akashbhalotia
#include <stdio.h>

int main()
{

    int m, y, days = 0;

    printf("Enter month number and year\n");

    scanf("%d%d", &m, &y);

    switch (m)
    {

        case 12:
            days += 31;

        case 11:
            days += 30;

        case 10:
            days += 31;

        case 9:
            days += 30;

        case 8:
            days += 31;

        case 7:
            days += 31;

        case 6:
            days += 30;

        case 5:
            days += 31;

        case 4:
            days += 30;

        case 3:
            days += 31;

        case 2:
            days += (y % 4 == 0) ? ((y % 100 == 0) ? ((y % 400 == 0) ? 29 : 28) : 29) : 28;

        case 1:
            days += 31;

            break;

        default:
            days = -1;

            printf("Invalid Input\n");

    }


    printf("Days = %d\n", days);

    return 0;

}
