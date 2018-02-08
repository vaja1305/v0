#include<stdio.h>
#include<conio.h>
void main()
{
 int a, b, c;
 
    printf("Enter the values of a,b,c\n");
    scanf("%d %d %d", &a, &b, &c);
    getch();
    if (a>b)
    {
        if (a > c)
        
        
        {
            printf("%d \n",a);
        }
        else
        {
            printf("%d \n",c);
        }
    }
    else if (b > c)
        printf("%d  \n",b);
    else
        printf("%d \n",c);
}
