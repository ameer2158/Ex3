#include <stdio.h>
#include "ex3.h"
#define LINE 256
#define WORD 30

int main()
{

char option [33];
    gets(option);
    char str[WORD];
    char type;
    int count=0;
    for(int i=0;option[i];i++){
        str[i]==option[i];
        count++;
        if(option[i]==' ') break;
        
    }
    type=option[count+1];
    
   if(type == 'a') 
       while(print_lines(str));

else if(type == 'b') 
    while(print_similar_words(str));

}