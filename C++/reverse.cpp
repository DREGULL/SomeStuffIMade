#include <iostream>
#include <cstring>
using namespace std;

void reverseWord(char * str_ing ){
    int leftIndex = 0 , rightIndex = strlen(str_ing)-1;
    char temp;
    while(leftIndex < rightIndex){
        
        temp = str_ing[leftIndex];
        str_ing[leftIndex]=str_ing[rightIndex];
        str_ing[rightIndex]=temp;

        
        leftIndex++;
        rightIndex--;
    }
}

void revWordInPlace(char * str_ing){
    
}



int main (){
    char x[]="Ahmed ";
    cout << "before reversing: "<<x<<endl ;
    reverseWord(x);
    cout <<"after reversing: "<<x<<endl;
    return 0 ;
}
