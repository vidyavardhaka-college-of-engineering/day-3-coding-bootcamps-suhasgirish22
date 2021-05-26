// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Write your code here
    if(number%2 == 0)
    {
      printf("%d is even",number);
    }
    else
    {
      printf("%d is odd",number);
    }
   
    return 0;
}
