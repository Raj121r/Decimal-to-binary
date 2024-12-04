#include <stdio.h>

void decimalToBinary(int n) {
    // Array to store binary number
    int binary[32];
    
    // Index to track the position in the binary array
    int i = 0;
    
    // Edge case: if n is 0, print 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;  // Store remainder in binary array
        n = n / 2;  // Divide the number by 2
        i++;
    }

    // Print the binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    
    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary equivalent: ");
    decimalToBinary(num);  // Call the function to convert to binary
    printf("\n");

    return 0;
}
