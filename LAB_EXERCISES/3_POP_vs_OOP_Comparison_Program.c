//POP vs. OOP Comparison Program
//pop
#include <stdio.h> 

float calculate_area(float length, float width) 
{
    return length * width;
}

int main() 
{
    float length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = calculate_area(length, width);

    printf("The area of the rectangle is: %.2f\n", area);
    
    return 0;
}
