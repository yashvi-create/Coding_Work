#include <stdio.h>

int main() {
    int choice;

    printf("=== Day 2: Operators & Control Flow ===\n");
    printf("1. Arithmetic Operators\n");
    printf("2. Relational Operators\n");
    printf("3. Logical Operators\n");
    printf("4. Conditional Statement\n");
    printf("5. Loop Example\n");
    printf("6. Switch Example\n");
    printf("Enter your choice (1–6): ");
    scanf("%d", &choice);
    
    int a = 10, b = 3;

    switch (choice) {

        case 1:
            printf("Arithmetic Operators:\n");
            printf("a + b = %d\n", a + b);
            printf("a - b = %d\n", a - b);
            printf("a * b = %d\n", a * b);
            printf("a / b = %d\n", a / b);
            printf("a %% b = %d\n", a % b);
            break;

        case 2:
            printf("Relational Operators:\n");
            printf("a > b : %d\n", a > b);
            printf("a < b : %d\n", a < b);
            printf("a == b : %d\n", a == b);
            printf("a != b : %d\n", a != b);
            break;

         case 3:
            printf("Logical Operators:\n");
            int x = 1, y = 0;
            printf("x && y : %d\n", x && y);
            printf("x || y : %d\n", x || y);
            printf("!x : %d\n", !x);
            break;

        case 4:
            printf("Conditional Statement:\n");
            if (a > b)
                printf("a is greater than b\n");
            else
                printf("b is greater than or equal to a\n");
            break;
        
        case 5:
            printf("For Loop Example:\n");
            for (int i = 1; i <= 5; i++) {
                printf("%d ", i);
            }
            printf("\n");
            break;

        case 6:
            printf("Switch Case Example:\n");
            int day = 3;
            switch (day) {
                case 1: printf("Monday\n"); break;
                case 2: printf("Tuesday\n"); break;
                case 3: printf("Wednesday\n"); break;
                default: printf("Other Day\n");
            }
            break;

        default:
            printf("Invalid choice!\n");

    }

    return 0;
}