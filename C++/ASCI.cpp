#include<iostream>
using namespace std; 
int returnASCII(char letter){
    return (int)letter;
}

int main (){
    char letter;
    cout << "Enter a letter ";
    cin >>letter;
    cout <<returnASCII(letter)<<endl;
    return 0 ;
}