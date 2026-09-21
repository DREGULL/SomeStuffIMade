#include<iostream>
using namespace std ;
int main (){
    int x;
    cout <<"enter details: "<<endl ;
    cin>> x;
    for (int i =0 ; i <x ; i++){
        cout<<endl;
        for (int j = 0 ;j<x;j++){
            if(i>0 && i<x-1){
                    if(j==0 || j==x-1){
                        cout<<"*";
                    }else{cout<<" ";}
            }else{cout<<"*";}
        }
    }
}