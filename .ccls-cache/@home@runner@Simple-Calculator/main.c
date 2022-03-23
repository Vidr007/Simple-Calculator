#include<stdio.h>

int main() 
{
float a,b,result;
  
  char op;
  printf("Enter operand");
  scanf("%c",&op);
  printf("Enter two integers a and b");
  scanf("%f%f",&a,&b);
  switch(op)
    {
      case '+': result=a+b;
        printf("Sum is %f",result);break;
      case '-': result=a-b;
          printf("difference is %f",result);break;
      case '*': result=a*b;
          printf("Product is %f",result);break;
      case '/': result=a/b;
          if (b==0)
          {
            printf("Enter a non zero number");
            return 0;
          }
      printf("quoitent is equal %f",result);break;
      default: printf("calculation is not possible or error\n");break;
    }
  return 0;
}