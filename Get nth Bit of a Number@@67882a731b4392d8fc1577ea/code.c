#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1; 
}
int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to retrieve (0-based index): ");
    scanf("%d", &n);

    int bitValue = getNthBit(num, n);
    printf("The value of bit %d in %d is: %d\n", n, num, bitValue);
    return 0;
}