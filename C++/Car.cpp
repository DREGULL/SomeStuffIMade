#include <iostream>
#include<string>
#include <locale>

using namespace std ;

class Cal {
private : 
        int x =0;
        int y =0;
    public :
        Cal(int f, int s ){
            x=f ;
            y=s ;
        }
        void operator -(Cal ob){
            cout << "X1 - Y2 ="<<x-ob.y<<endl;
            cout << "X2 - Y1 ="<<y-ob.x<<endl;
        }
        int operator --(){
           return --x; 
        }
        int operator --(int){
            return x--; 
         }
        void sum(Cal ob1 , Cal ob2){
            cout << "X1 - Y2 ="<<ob1.x-ob2.y<<endl;
            cout << "X2 - Y1 ="<<ob1.y-ob2.x<<endl;
        }
        void sum (Cal ob ){
            cout <<"X1 - Y2= "<<x-ob.y<<endl;
            cout <<"X2 - Y1= "<<y-ob.x<<endl<<"\n\n";
        }
        ~Cal(){
            cout <<"The End"<<endl;
        }
        
};

int main (){
    // system("cls");
    Cal ob(10,15);
    cout <<--ob<<endl;
    cout <<ob--<<endl;
    // Cal ob1(20,25);
    // Cal ob2(15,10);
    // ob1-ob2;
    // ob1.sum(ob1,ob2);
    // ob1.sum(ob2);    
    // cout <<x[--k]<<endl;
    // cout <<x[k]<<endl;
}
