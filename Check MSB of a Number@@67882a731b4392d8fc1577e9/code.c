#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Create a mask with MSB set for a 32-bit integer
    int msbMask = 1 << 31;

    // Check if MSB is set or not
    if (num & msbMask) {
        printf("MSB is set (1).\n");
    } else {
        printf("MSB is not set (0).\n");
    }

    return 0;
}
