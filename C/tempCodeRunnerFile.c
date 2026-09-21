#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>
#include<ctype.h>

char * tolowerSent(const char *text) {
    size_t length = strlen(text);
    char * temp = malloc(length);
    if(temp == NULL){
        return "";
    }
    for (size_t i = 0; i < length; i++)
    {
        temp[i]=tolower(text[i]);
    }
    temp[length]='\0';
    return temp;
}

size_t duplicate_count(const char *text) {
    size_t length = strlen(text);
    char * temp =tolowerSent(text); 
    if (temp==NULL){
        return 1;
    }
    char* testTab="abcdefghijklmnopqrstuvwxyz0123456789";
    size_t result=0;
    for (size_t i = 0; i < 36; i++)
    {
        size_t counter=0;
        for (size_t j = 0; j < length; j++)
        {
            if(testTab[i]==temp[j]){
                counter ++;}
        }
        if(counter>1){result++;}
    }
    free(temp);
    return result;
}

int main (){
    int k =duplicate_count("indivisibility");
    printf("%i",k);
    
}