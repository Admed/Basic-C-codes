#include<stdio.h>

int adnanerdokan(int atta, int maoyda) {
    return atta + maoyda;
}

int inputnao()
{
    int jetakeinputnibo;
    printf("Enter a number: ");
    scanf("%d",&jetakeinputnibo);
    return jetakeinputnibo;
}

// int main()
// {
//     int a,b;
//     printf("Enter first number:");
//     scanf("%d",&a );
//     // printf("\n");
//     printf("Enter second number:");
//     scanf("%d",&b);
//     // printf("\n");
//     printf("The sum is : %d\n",adnanerdokan(a,b));
//     printf("sum of 5 and 2 is: %d",adnanerdokan(5,2));
//     return 0;
// }

int main()
{
    int a,b;
    a = inputnao();
    b = inputnao();
    printf("Sum is %d", adnanerdokan(a,b));
    return 0;
}