#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct letter{
    char name ; 
    int start;
    int end;
}Node;

int main (){
    system("cls");
    Node arr[26];
    char intial[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (size_t i = 0; i < 26; i++)
    {
        arr[i].name = intial[i];
        arr[i].start = -1;
        arr[i].end = -1;
    }
    for (size_t i = 0; i <26; i++)
    {
        printf("Char : %c / Start  : %i / End : %i\n",arr[i].name ,arr[i].start,arr[i].end);
    }
}

    // char* partition(char * str_ing){
    //     if (str_ing == NULL){return NULL;}
    //     int length= strlen(str_ing);
    //     char * temp = malloc(length+1); 
    //     if (temp==NULL){return NULL;}
    //     free(temp);
    // }
