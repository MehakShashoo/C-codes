#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max;
    switch ((a > b) && (a > c)) {
        case 1:
            max = a;
            break;
        case 0:
            switch (b > c) {
                case 1:
                    max = b;
                    break;
                case 0:
                    max = c;
                    break;
            }
            break;
    }

    printf("The greatest number is: %d\n", max);
    return 0;
}
