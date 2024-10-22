#include <stdio.h>
#include <math.h>


int calculatePerimeter(int length, int width);
int calculateArea(int length, int width);

int main() {
    int perimeter, area, length, width;

    
    printf("Enter the length and width of the rectangle: ");
    scanf("%d%d", &length, &width);

    
    perimeter = calculatePerimeter(length, width);
    area = calculateArea(length, width);


    printf("The perimeter of the rectangle is %d\n", perimeter);
    printf("The area is %d\n", area);

    return 0;
}


int calculatePerimeter(int length, int width) {
    return 2 * (length + width);
}


int calculateArea(int length, int width) {
    return length * width;}