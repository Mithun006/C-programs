#include<stdio.h>
int main()
{
  char c;
  printf("Enter a character: ");
  scanf("%c",&c);
  switch(c)
  {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': printf("\n%c is a Vowel",c);
                break;
    default: printf("\n%c is a Consonant",c);
  }
  return 0;
}
