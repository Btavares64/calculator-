#include <stdio.h>
#include <stdlib.h>


void addition(int a, int b){
    int c = a + b;
    printf("Your total is %d\n", c);
}

void subtraction(int a, int b){
    int c = a - b;
    printf("Your total is %d\n", c);
}

void multiplication(int a, int b){
    int c = a * b;
    printf("Your total is %d\n", c);
}

void division(int a, int b){
    if (b != 0){
        int c = a / b;
        printf("Your total is %d\n", c);
    } else{
        printf("You cant divide by 0\n");
    }
}

int main() {
    int a;
    int b;
    char selection;
    printf("Welcome to my simple text-based calculator\n");
    
    while (1) {
        sleep(1);  
        printf("Please make a selection:\n");
        printf("[a] for addition\n");
        printf("[s] for subtraction\n");
        printf("[m] for multiplication\n");
        printf("[d] for division\n");
        printf("[q] to quit\n");
        
        scanf(" %c", &selection);
        
        if (selection == 'q'){
            printf("***Goodbye***\n");
            break;
        }
        
        switch (selection) {
            case 'a':
                printf("Enter your first value: ");
                scanf("%d", &a);
                printf("Enter your second value: ");
                scanf("%d", &b);
                addition(a, b);
                break;
            case 's':
                printf("Enter your first value: ");
                scanf("%d", &a);
                printf("Enter your second value: ");
                scanf("%d", &b);
                subtraction(a, b);
                break;
            case 'm':
                printf("Enter your first value: ");
                scanf("%d", &a);
                printf("Enter your second value: ");
                scanf("%d", &b);
                multiplication(a, b);
                break;
            case 'd':
                printf("Enter your first value: ");
                scanf("%d", &a);
                printf("Enter your second value: ");
                scanf("%d", &b);
                division(a, b);
                break;
            default:
                printf("Invalid entry. Please make a selection\n");
                continue; 
        }
        
    }
    return 0;
}
