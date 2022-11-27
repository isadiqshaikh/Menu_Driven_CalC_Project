#include<stdio.h>
int main()
{
    double a,b;
    int choice;

   while(1){
       printf("\n\n***********************************************************************************************************************");

       printf("                                                             MENU DRIVEN CALCULATOR                                               \n");

       printf("\n\n 1-Addition\n 2-Subtraction\n 3-Multiplication\n 4-Division\n 5-Exit");

       printf("\n************************************************************************************************************************\n");

       printf("Enter Your Choice(1/2/3/4/5)");
    scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter the First Number");
            scanf("%lf",&a);
            printf("Enter the Second Number");
            scanf("%lf",&b);
            printf("%.3lf + %.3lf = %.3lf",a,b,a+b);
        break;

        case 2:
            printf("Enter the First Number");
            scanf("%lf",&a);
            printf("Enter the Second Number");
            scanf("%lf",&b);
            printf("%.3lf - %.3lf = %.3lf",a,b,a-b);
        break;

        case 3:
            printf("Enter the First Number");
            scanf("%lf",&a);
            printf("Enter the Second Number");
            scanf("%lf",&b);
            printf("%.3lf * %.3lf = %.3lf",a,b,a*b);
        break;

        case 4:
            printf("Enter the First Number");
            scanf("%lf",&a);
            printf("Enter the Second Number");
            scanf("%lf",&b);
            printf("%.3lf / %.3lf = %.3lf",a,b,a/b);
        break;

        case 5:
            printf("Thank You...!!!");
            return 0;
        break;

        default:
                printf("Invalid");
        break;



        }

    }
    return 0;
}
