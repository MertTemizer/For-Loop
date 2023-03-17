#include <stdio.h>

int main()
{
    int n, count;
    float number, sum, average;
    
    printf("How many numbers do you want to input? ");
    scanf("%d", &count);
    
    sum = 0;
    
    for(n = 1; n <= count; n = n + 1)
    {
        printf("Input the number from your list: ");
        scanf("%f", &number);
        sum = sum + number;
    }
    
    average = sum / count;
    
    printf("The sum of the numbers is %f\n", sum);
    printf("The average of the numbers is %f\n", average);
    
    return 0;
}
