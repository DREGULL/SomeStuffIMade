#include <iostream>
#include <string>
using namespace std;

int solution(string roman) {
    int ret = 0 ;
    for (size_t i = 0 ; i < roman.length() ; i ++){
        switch (roman[i]){
            case 'I':
            ret = ret + 1;
            break ; 
            case 'V':
            ret = ret + 5;
            break;
            case 'X':
            ret = ret + 10;
            break ; 
            case 'L':
            ret = ret + 50;
            break ;
            case 'C':
            ret = ret + 100 ;
            break ;
            case 'D':
            ret = ret + 500;
            break ;
            case 'M':
            ret = ret +1000;
            break ; 
            default : return 0;
        }
    }return ret;}
// I          1
// V          5
// X          10
// L          50
// C          100
// D          500
// M          1,000
int main () {
    int k = solution("XL");
    printf ("%d ", k);
}