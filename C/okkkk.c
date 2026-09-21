#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* wordReve(char * str_ing){
    if(str_ing == NULL ){return NULL;}
    int len = strlen(str_ing);
    char* te_mp= malloc(len);
    if (te_mp== NULL){return NULL;}
    int i = 0 , j = len;
    int round =len;
    while (i < round)
    {
        te_mp[i]=str_ing[j-1];
        i++; j--;
    }te_mp[round]= '\0';
    return te_mp;
}


char* sentReve(char * str_ing){
    if (str_ing == NULL){return NULL;}
    char *temp= wordReve(str_ing);
    if (temp== NULL ){return NULL;}
    size_t j = 0;
    size_t i = 0;
    int len =strlen(temp);
    while (i<=len)
    {
        if(temp[i]==' ' || temp[i]=='\0'){
            char * ret=malloc(i-j);
            int k;
            for(k=0 ; k <i-j; k++){
                ret[k]=temp[j+k];
            }
            ret[k]='\0';
            char *haser=wordReve(ret);
            int g=j;
            while (g<i)
            {
                temp[g]=haser[g-j];
                g++;
            }if(temp[i]==' '){temp[i]=' ';}

            free(haser);
            
            free(ret);

            j=i+1;
        }
        i++;
    }
    temp[i]='\0';
    return temp;
}

int main (){
    char * string="ead mobarak said";
    char * x= sentReve(string);
    printf("%s",x);
    free (x);
}