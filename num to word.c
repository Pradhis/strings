#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void num_to_word(char* n)
{
    int len = strlen(n);
    if (len == 0) {
        fprintf(stderr, "empty string\n");
        return;
    }
    if (len > 4) {
        fprintf(stderr,
                "Length more than 4 digit is not supported\n");
        return;
    }

    char* single_digits[] = { "zero", "one", "two",   "three", "four", "five", "six", "seven", "eight", "nine" };

    char* two_digits[]= { "", "ten", "eleven","twelve", "thirteen",  "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };

    char* tens_multiple[] = { "", "", "twenty", "thirty", "forty",   "fifty", "sixty",  "seventy", "eighty", "ninety" };

    char* tens_power[] = { "hundred", "thousand" };

    printf("\n%s: ", n);

    if (len == 1) {
        printf("%s\n", single_digits[*n- '0']);
        return;
    }

    while (*n!= '\0') {

        if (len >= 3) {
            if (*n- '0' != 0)
            {
                printf("%s ", single_digits[*n- '0']);
                printf("%s ", tens_power[len - 3]);
            }
            --len;
        }

        else {
            if (*n== '1')
                {
                int sum = *n- '0' + *(n+ 1) - '0';
                printf("%s\n", two_digits[sum]);
                return;
                }

            else if (*n== '2' && *(n+ 1) == '0')
                {
                printf("twenty\n");
                return;
                }

            else
                {
                int i = *n- '0';
                printf("%s ", i ? tens_multiple[i] : "");
                ++n;
                if (*n!= '0')
                    printf("%s ",
                           single_digits[*n - '0']);
                           }
        }

        ++n;
    }
}

int main(void)
{
    num_to_word("1045");
    return 0;
}
