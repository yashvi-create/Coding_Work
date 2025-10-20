#include <stdio.h>
#define PI 3.14159

// Function to print hello message
void hello() {
    printf("Hello, World!\n");
    printf("Hello, Universe! Welcome to C programming.\n");
}

// Function to add two numbers
void sum_two_numbers() {
    int a, b;
    printf("\n--- Program 2: Sum of Two Numbers ---\n");
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    printf("Sum = %d\n", a + b);
}

// Function to check even or odd
void even_or_odd() {
    int num;
    printf("\n--- Program 3: Even or Odd ---\n");
    printf("Enter a number:");
    scanf("%d", &num);
    if (num % 2 == 0) 
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

// Function to calculate area of a circle
void area_of_circle() {
    float radius, area;
    printf("\n--- Program 4: Area of Circle ---\n");
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of Circle = %.2f\n", area);
}

// Main fanction with menu
int main() {
    int choice;

    do {
        printf("\n==============================\n");
        printf(" Day 1 Practice Programs Menu\n");
        printf("==============================\n");
        printf("1. Hellpo Message\n");
        printf("2. Sum of Two Numbers\n");
        printf("3. Even or Odd\n"); 
        printf("4. Area of Circle\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: hello(); break;
            case 2: sum_two_numbers(); break;
            case 3: even_or_odd(); break;
            case 4: area_of_circle(); break;
            case 5: printf("Exiting... Goodbye \n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
