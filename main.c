#include <stdio.h>
#include "ex3.h"
#define LINE 256
#define WORD 30

int main()
{
  int array [] = {8,3,3,7,9,2,5,1,6,10};
   shift_element(array+1,4);
  insertion_sort(array , 10);
   for (int i = 0;i<10;i++){
       printf("%d,",*(array+i));
   }
}
    





