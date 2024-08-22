#include <stdio.h>

void decimalToBinary(int decimal, char binary[9]);

int main() 
{
    int ipAddr[4];
    char binaryIp[4][9];

    printf("Enter the IP address (e.g., 192 168 1 1): ");
    scanf("%d %d %d %d", &ipAddr[0], &ipAddr[1], &ipAddr[2], &ipAddr[3]);

    for (int i = 0; i < 4; i++) 
    {
        decimalToBinary(ipAddr[i], binaryIp[i]);
    }

    printf("The binary IP address is: %s %s %s %s\n", binaryIp[0], binaryIp[1], binaryIp[2], binaryIp[3]);
    return 0; 
}

void decimalToBinary(int decimal, char binary[9]) 
{
    for (int i = 7; i >= 0; i--) 
    {
        int bit = (decimal >> i) & 1;
        binary[7 - i] = bit + '0';
    }
    binary[8] = '\0'; 
}
