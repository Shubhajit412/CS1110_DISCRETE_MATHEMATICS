#include <stdio.h>

int main() {
    int n;          //..........................length of binary strings
    char bin1[n], bin2[n];
    int result[n];

    printf("Enter the length of binary strings: ");
    scanf("%d", &n);

    printf("Enter first binary string: ");
    scanf("%s", bin1);

    printf("Enter second binary string: ");
    scanf("%s", bin2);

    for (int i = 0; i < n; i++)
    {
        int bit1 = bin1[i] - '0';  //...........converts '0' or '1' to integer 0 or 1, due to ASCII values
        int bit2 = bin2[i] - '0';
        result[i] = (bit1 | bit2);  //..........performs OR for each bit
    }

    printf("Bitwise OR result: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", result[i]);
    }
    printf("\n"); //............................aesthetics

    return 0;
}
