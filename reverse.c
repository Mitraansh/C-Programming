#include <stdio.h>
int main() {
    int num, temp = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        temp = temp * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number = %d", temp);
    return 0;
}
