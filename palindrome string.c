
#include <stdio.h>
#include <string.h>
int main()
{

  	char str[100] = "malayalam";
    int i,len,set= 0;
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i]!= str[len - i - 1])
        {
            set= 1;
            break;
        }
    }

    if(set)
        printf("%s is not palindrome",str);
    else
        printf("%s is palindrome",str);
        return 0;
}
