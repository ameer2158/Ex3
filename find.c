#include <stdio.h>
#include "ex3.h"
#define LINE 256
#define WORD 30

int getlin(char s[]){
    gets(s);
    int count = 0;
    for (int i = 0 ; s[i] ; i++){
        count++;
    }
    return count;
}

int getword(char w[]){
    scanf("%s",w);
    int count=0;
    for(int i=0; w[i] || w[i]==' ' || w[i]=='\t'; i++){
        count++;
    } 
    return count;
}

int substring(char str1[], char str2[]){
    int sum = 0;
    for(int i = 0; str2[i]; i++){
        sum++;
    }
    int count = 0;
    for(int i = 0; str1[i]; i++){
        if(str1[i]==str2[0]){
            count++;
            for(int j = 1; str2[j]; j++){
                if(str1[i+j]==str2[j]){
                count++;
                }
                else return 0;
            }
     if(sum==count) return 1;
    else return 0;
        }
    }
    
}

int similar (char s[], char t[], int n){
    if(substring(s,t)){
    int s_leng=0;
    int t_leng=0;
    for(int i=0; s[i]; i++){
        s_leng++;
    }
     for(int i=0; t[i]; i++){
        t_leng++;
    }
    if((s_leng-n)==t_leng){
        int count=0;
        int i=0;
        int j=0;
        while(s[i]){
            if(s[i]==t[j]){
                count++;
                j++;
            }
            i++;
        }
        if(count+n==s_leng) return 1;
        else return 0;
        
    }
    else return 0;
    }
    else return 0;
}

char* print_lines(char str[]){
    char line [LINE];
    char word [WORD];
    char* flag;
    flag = gets(line);
    int j=0;
    for(int i=0;line[i];i++){
        word[j]=line[i]; 
        if(line[i]==' ' || line[i+1]=='\0'){
          if(substring(word,str)) printf("%s\n",line);  
          i++;
          j=0;
        } 
    }
    return flag;
}

char* print_similar_words(char str []){
    char line [LINE];
    char word [WORD];
    char* flag;
    flag = gets(line);
    int j=0;
    for(int i=0;line[i];i++){
        word[j]=line[i]; 
        if(line[i]==' ' || line[i+1]=='\0' || line[i]=='\t'){
          if(similar(word,str,1) ||similar(word,str,0) ) printf("%s\n",word);  
          i++;
          j=0;
        } 
    }
    return flag;
}
