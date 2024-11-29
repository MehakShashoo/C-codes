#include <stdio.h>
int main()
{
    int a;
    printf("Enter the seat number(single digit)=");
    scanf("%d", &a);
    switch (a%12)
    {
    case 1:
        printf("WS ");
        if (a % 12 == 1)
            printf("%d", a + 11);
        break;
    case 2:
        printf("MS ");
        if (a % 12 == 2)
            printf("%d", a + 9);
        break;
    case 3:
        printf("AS ");
        if (a % 12 == 3)
            printf("%d", a + 7);
        break;
    case 4:
        printf("AS ");
        if (a % 12 == 4)
            printf("%d", a + 5);
        break;
    case 5:
        printf("MS ");
        if (a % 12 == 5)
            printf("%d", a + 3);
        break;
    case 6:
        printf("WS ");
        if (a % 12 == 6)
            printf("%d", a + 1);
        break;
    case 7:
        printf("WS ");
        if (a % 12 == 7)
            printf("%d", a - 1);
        break;
    case 8:
        printf("MS ");
        if (a % 12 == 8)
            printf("%d", a - 3);
        break;
    case 9:
        printf("AS ");
        if (a % 12 == 9)
            printf("%d", a - 5);
        break;
    case 10:
        printf("AS ");
        if (a % 12 == 10)
            printf("%d", a - 7);
        break;
    case 11:
        printf("MS ");
        if (a % 12 == 11)
            printf("%d", a - 9);
        break;
    case 12:
        printf("WS ");
        if (a % 12 == 0)
            printf("%d", a - 11);
        break;
    }

    return 0;
}
