#include <stdio.h>

int main() {
    int age, citizen;
    
    // Taking input
    scanf("%d %d", &age, &citizen);
    
    // Checking eligibility criteria
    if (age >= 18 && citizen == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}