#include <stdio.h>
#include "ex3.h"
#define LINE 256
#define WORD 30

shift_element(int* arr, int i){
  
  int post_array = *(arr+i+1); 
  for(int j = i ; j > 0 ; j--){
    *(arr+j+1) = *(arr+j); 
  }
  *(arr+1) = post_array; 
}
insertion_sort(int* arr , int len){
  int i,j;
  for(i = 1 ; i < len ; i++){
    for(j = i ; (j > 0 ) && ( *(arr + j - 1) > *(arr + j ) ); j-- ){
      int temp_arr = *(arr + j);
      *(arr + j) = *(arr + j - 1);
      *(arr + j - 1) = temp_arr;
    }
  }
}