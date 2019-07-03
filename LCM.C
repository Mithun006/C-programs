#include <stdio.h>

int main()
{
    int num1,num2,i,lim,lcm=1;
    printf("Enter the 1st number and 2nd number: ") ;
    scanf("%d %d",&num1,&num2);
    if(num1%num2==0 || num2%num1==0)
    {
        if(num1>num2)
            printf("LCM of %d and %d is %d",num1,num2,num1);
        else
            printf("LCM of %d and %d is %d",num1,num2,num2);
        return 0;
    }
    if(num1>num2)
        lim=num1;
    else
        lim=num2;
    for(i=1;i<=lim;i++)
    {
        if(num1%i==0 || num2%i==0)
            lcm*=i;
    }
    printf("LCM of %d and %d is %d",num1,num2,lcm);
    return 0;
}
