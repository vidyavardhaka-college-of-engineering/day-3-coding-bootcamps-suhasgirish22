//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n , p , q;

  	scanf("%d", &n);

  	//Write your code here
  	for(p=1;p<=n;p++)
    {
      for(q=1;q<=p;q++)
      {
      printf("$ ");
      }
       printf("\n");
    }
    return 0;
}
