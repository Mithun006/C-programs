#include <stdio.h>

int main()
{
    int num1,num2,a,b,i=1,lcm=1;
    printf("Enter the 1st number and 2nd number: ") ;
    scanf("%d %d",&num1,&num2);
    a=num1;
    b=num2;
    if(num1%num2==0 || num2%num1==0)
    {
        if(num1>num2)
            printf("LCM of %d and %d is %d",num1,num2,num1);
        else
            printf("LCM of %d and %d is %d",num1,num2,num2);
        return 0;
    }
    while(num1!=1 || num2!=1)
    {
        if(num1%i==0 && num2%i==0 && num1!=1 && num2!=1)
        {
            num1/=i;
            num2/=i;
            lcm*=i;
        }
        else if(num1%i==0 && num1!=1)
        {
            num1/=i;
            lcm*=i;
        }
        else if(num2%i==0 && num2!=1)
        {
            num2/=i;
            lcm*=i;
        }
        i++;
    }
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}
