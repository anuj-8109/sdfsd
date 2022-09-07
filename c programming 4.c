
#include <stdio.h>

int main()
 {

  float a,b;
  int num1, num2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &a,b);
  printf("Enter two operands: ");
  scanf("%d %d", &num1, &num2);

  switch (num1,num2)
   {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.1d - %.1d = %.1d", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.1d * %.1d = %.1d", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.1d / %.1d = %.1d", num1, num2, num1 / num2);
      break;
  }

  return 0;
}
