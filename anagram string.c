#include<stdio.h>
int main()
{
    char str1[100]="dear",str2[100]="deer";
    int first[10]={0}, second[10]={0},count=0,set=0;
    while(str1[count] != '\0')
    {
        first[str1[count]-'a']++;
        count++;
    }
    count=0;
    while(str2[count] != '\0')
    {
        second[str2[count]-'a']++;
        count++;
    }
    for(count=0;count<26;count++)
    {
        if(first[count]!= second[count])
            set=1;
    }
    if(set==0)
    {
        printf("%s and %s are Anagram Strings.",str1,str2);
    }
    else
    {
        printf("\n%s and %s are not Anagram Strings.",str1,str2);
    }
    return 0;

}
