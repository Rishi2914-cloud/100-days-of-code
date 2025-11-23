#include<stdio.h>
int main()
    {
    float radius ,area ,circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f" ,&radius);

    area = 2 * 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("The area of circle is %f: " ,area);
    printf("The circumference of the circle is %f: " ,circumference);

    return 0;
}