#include<stdio.h>
int main()
{

    char s[7]="String";
    char t[7];
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        t[i]=s[i];
    }
    t[i]='\0';
    printf("%s",t);
    return 0;
}
