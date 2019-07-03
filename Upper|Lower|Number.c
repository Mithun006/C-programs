#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    if( (int)c >= 65 && (int)c<=90 )
        printf("%c is an Upper Case Alphabet",c);
    else if((int)c>=97 && (int)c<=112)
        printf("%c is a Lower Case Alphabet",c);
    else if((int)c>=48 && (int)c<=57)
        printf("%c is a number",c);
    else 
        printf("%c is a special character",c);
    return 0;
}
