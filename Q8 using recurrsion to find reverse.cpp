#include <stdio.h>

int reverse(int num) {
    static int rev = 0; // Static variable to store the reversed number

    if (num == 0) {
        return rev;
    } else {
        rev = rev * 10 + num % 10;
        return reverse(num / 10);
    }
}

int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int reversedNum = reverse(num);
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}

