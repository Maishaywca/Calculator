#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, sub, add, mult, div;
    int n;
    printf("Input the bigger number: ");
    scanf("%lf", &num1);
    printf("Input the smaller number: ");
    scanf("%lf", &num2);
    printf("Hello World!\n");
    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    printf ("What would you like to do?\n");
    printf ("1. Addition\n");
    printf ("2. substraction\n");
    printf ("3. Multiplication\n");
    printf ("4. Division\n");
    printf("Your Answer: ");
    scanf("%d",&n);
    if (n == 1)
    {
        printf("Result: %lf", add);
    }
   else if (n == 2)
   {
       printf("Result: %lf", sub);
   }
  else if (n == 3)
   {
       printf("Result: %lf", mult);
   }
   else
   {
       printf("Result: %lf", div);
   }

    return 0;
}
