#include <stdio.h>

int main() {

    int n;

    // Take day number from user
    printf("Enter Day Number (1-7) : ");
    scanf("%d",&n);

    // Selection control statement
    switch (n)
    {
    case 1:
        // Case label
        printf("Monday\n");

        // Exit the switch block
        break;

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;

    case 4:
        printf("Thursday\n");
        break;

    case 5:
        printf("Friday\n");
        break;

    case 6:
        printf("Saturday\n");
        break;

    case 7:
        printf("Sunday\n");
        break;

    default:
        // Default case (runs when no case matches)
        printf("Invalid Number\n");
        break;
    }

    return 0;
}