#include<iostream>
#include <string>
#include<cstring>

using namespace std;

std::string to_camel_case(std::string text) {
    string result ;
    result.reserve(text.length());

    int i = 0 ;
    bool currentCase = false ;
    while(text[i] !='\0'){
        
        i++;
    }
    cout << result;
  return result;
}
int main (){
    string x = to_camel_case("the_stealth_warrior");
    cout << x <<endl;
}