#include <iostream>

using namespace std;
static size_t i = 1;
class Sum;
class Sum {
    private : 
        int x=0; 
    public:
        Sum(){
            cout << "Enter X"<<i<<" :";
            cin >> x;
            i++;
        }
        void operator+(Sum ob){
            cout <<x+ob.x<<endl;
        }
        int add(Sum ob){
            return x+ob.x;
        }
};
int main (){
    Sum ob1 ; 
    Sum ob2 ;

    ob1+ob2;
    
    // cout<<ob1.add(ob2)<<endl;
    
}