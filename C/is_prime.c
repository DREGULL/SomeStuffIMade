#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool is_prime(int num)
{
    if (num < 2 ){
        return false ;
    }if (num == 2 ) {return 1;}
    for (size_t i =2 ; i <= sqrt(num); i++ ){
        if((num%i)== 0){
            return false;
        }
    }
    return true;
}
int main (){
    int k ;
    printf("Enter number : ");
    scanf("%i",&k);
    int x = is_prime(k);
    printf("%d",x);
}