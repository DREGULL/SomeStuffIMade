#include <iostream>
using namespace std;
bool isEven(int x){
    return (x%2==0) ? true : false ;
}
int main (){
    int X;
    cout << "Enter a value : ";
        cin>>X;
    cout << "Is the Value Even "<<isEven(X)<<endl;

return 0;
}