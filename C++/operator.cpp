#include<iostream>

using namespace std;
class Animal{
    protected : 
        string Name;
    public :
        Animal (){
            cout << "Animale Cons"<<endl;
        }
        virtual void eat(){
            cout <<"is eating"<<endl ;
        }
        ~Animal(){
            cout<<"Destructor !!"<<endl;
        }
};
class Dog : public Animal {
    public :
        Dog (){
            cout << "enter the name";
            cin >> Name;
        }
        void eat (){
            cout <<"The dog is eating !!"<<endl;
        }
        ~Dog(){
            cout<<"Destructor !!"<<endl;
        }
};
class Cat : public Animal {
    public :
        Cat (){
            cout<<"Enter the name of cat"<<endl;
            cin >> Name;
        }
        void eat (){
            cout <<"Cat is eating !!"<<endl;
        }
        ~Cat(){
            cout<<"Destructor !!"<<endl;
        }
            
};
int main (){
    Animal *ptr;
    Dog mydog;
    Cat mycat;
    ptr = &mydog;
    ptr->eat();
    
    ptr = &mycat;
    ptr ->eat();

}