#include<stdio.h>
#include<math.h>
int main()
{
    int side_1,side_2,side_3,a,b,c;
    printf("Enter the  side 1 of triangle   ");
    scanf(" %d",&side_1);
    printf("Enter the   side 2 of triangle   ");
    scanf("%d",&side_2);
    printf("Enter the side 3 of triangle   ");
    scanf("%d",&side_3);
    a=side_1*side_1;
    b=side_2*side_2;
    c=side_3*side_3;
    if (side_1==side_2 && side_2==side_3)
    {
        printf("this is  equilateral triangle ");

    }
    else if(side_1==side_2 || side_1==side_3 || side_2==side_3 )
    {
        printf("this is isosceles triangle ");

    }
    else if(a==b+c || b==a+c || c==a+b)
    {
        printf("Right triangle ");
    }
    else
    {
        printf("scalene triangle ");
    }
    return 0;
}

