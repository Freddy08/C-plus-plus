#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
unsigned long convertToDecimal(char hex[]);
 
int main()
{
    char hex[9];// 8 characters for 32-bit Hexadecimal Number and one for '\0'.
    unsigned long decimalNumber;
    printf(" programa para convertir de hexadecimal a deciaml \n");
    printf(" dame el numeror : ");
    scanf("%s", hex);
 
    decimalNumber = convertToDecimal(hex);
    printf(" el numero decimal es: %u  \n", decimalNumber);
    fflush(stdin);
    getchar();
    return 0;
}
 
unsigned long convertToDecimal(char hex[])
{
    char *hexString;
    int length = 0;
    const int base = 16; // Base of Hexadecimal Number
    unsigned long decimalNumber = 0;
    int i;
    // Find length of Hexadecimal Number
    for (hexString = hex; *hexString != '\0'; hexString++)
    {
        length++;
    }
    // Find Hexadecimal Number
    hexString = hex;
    for (i = 0; *hexString != '\0' && i < length; i++, hexString++)
    {
        // Compare *hexString with ASCII values
        if (*hexString >= 48 && *hexString <= 57)   // is *hexString Between 0-9
        {
            decimalNumber += (((int)(*hexString)) - 48) * pow(base, length - i - 1);
        }
        else if ((*hexString >= 65 && *hexString <= 70))   // is *hexString Between A-F
        {
            decimalNumber += (((int)(*hexString)) - 55) * pow(base, length - i - 1);
        }
        else if (*hexString >= 97 && *hexString <= 102)   // is *hexString Between a-f
        {
            decimalNumber += (((int)(*hexString)) - 87) * pow(base, length - i - 1);
        }
        else
        {
            printf(" Invalid Hexadecimal Number \n");
 
            printf(" Press enter to continue... \n");
            fflush(stdin);
            getchar();
            return 0;
            exit(0);
        }
    }
    return decimalNumber;
}
