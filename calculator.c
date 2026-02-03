#include <stdio.h>

int add(int a, int b);

int sub(int a, int b);

int main() {

    int num1, num2, result;

    char op;

    printf("enter first num: ");

    scanf("%d", &num1);

    printf("enter operator (+ or -): ");

    scanf(" %c", &op);   

    
    printf("enter second num: ");

    scanf("%d", &num2);


    result = add(num1, num2);


    printf("\nprocess:\n");

    printf("%d %c %d\n", num1, op, num2);

    printf("result:\n");

    printf("%d\n", result);

    return 0;
}

int add(int a, int b) {

    return a + b;
}


int sub(int a, int b) {
    
    return a - b;

}