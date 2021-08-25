#include <stdio.h>

int main()
{


  int a[4] = {10,20 ,30,40};

  int *p = a;

  for(int i =0 ; i<4 ; i++)
  {
  	printf("%d\t" , *(a+i));
  }

}