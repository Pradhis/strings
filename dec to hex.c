#include<stdio.h>

void convert (int n)
{
    char hex[100];
    int i = 0;
  while (n!= 0)
    {
      int rem = 0;
      rem = n%16;
      if (rem < 10)
        {
            hex[i] = rem + 48; i++;
      }
      else
	{
	  hex[i] = rem + 55;
	  i++;
	}
      n/=16;
    }
    printf ("Hexadecimal num is:");
  for (int j = i- 1; j >= 0; j--)
    printf ("%c" , hex[j]);
}

int main ()
{
  int n;
  printf("Enter decimal num:");
  scanf("%d",&n);
  convert (n);
  return 0;
}
