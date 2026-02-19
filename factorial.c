#include <stdio.h>

int main() {
    printf("Enter a number you want to calculate factorial of: ");
    int num;
    scanf("%d",&num);
    if(num<0) printf("Enter a valid number");
    if(num==0) printf("1");
    int result = 1;
    for(int i=1; i<=num; i++){
        result *= i;
    }
    printf("The factorial of number is : %d",result);
    return 0;
}
