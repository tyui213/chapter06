#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


(int widtht height) {
    return (width + height) * 2;
}

int main() {
    int width, height;

    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);


    perimeter = calculate_perimeter(width, height);


    printf("직사각형의 둘레의 길이는 %d\n", perimeter);

    return 0;
}