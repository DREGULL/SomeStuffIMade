#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char* duplicate_count(char *text){
    char * temp = malloc(sizeof(text));
    if(temp == NULL) return "error";
    char test[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (size_t i = 0; i < strlen(text); i++){
        temp[i]= tolower( text[i] );
    } 
    size_t count=0 ;
    for(size_t i = 0 ; i < 26 ; i++){
        for (size_t j =0 ; j<strlen(text); j++){
            if(i==j) j++;
            if(temp[j]==test[i]) {
                count++;
                if(count > 1){
                    for (size_t k = 0; k < strlen(temp); k++)
                    {
                        if(temp[k]==test[i]){
                            temp[k]=')';
                        }
                    }                    
                }
            }
            // else temp[i]='(';
        }
    }
    for (size_t i = 0; i < strlen(temp); i++)
    {
        if(temp[i] != ')') temp[i]='(';
    }
    return temp;
}
int main (){
    char * x=duplicate_count("aemede");
    printf("%s",x);
    free(x);
}