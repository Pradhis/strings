#include<stdio.h>
#include<string.h>
#include<math.h>
int convert(char hex[])
{
    int len = strlen(hex);
    int decimal = 0, position= 0;

    for(int i = len - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            int digit = hex[i] - 55;
            decimal += digit * pow(16,position);
            position++;
        }
    }
    return decimal;
}
int main()
{
char hex[20];
scanf("%[^\n]", &hex);

printf("%d",convert(hex));
return 0;
}
