
#include <stdio.h>
int main(){
      float a, b, c;
      printf("Enter three numbers: ");
      scanf("%f %f %f", &a, &b, &c);
      if (a>=b)
      {
          if(a>=c)
            printf("Largest number = %.2f",a);
          else
            printf("Largest number = %.2f",c);
      }
      else
      {
          if(b>=c)
            printf("Largest number = %.2f",b);
          else
            printf("Largest number = %.2f",c);
      }
      return 0;
}
