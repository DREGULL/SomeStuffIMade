#include<iostream>
using namespace std ;

int main (void){
    int N;
    cout<<"Enter number of stars : ";
    cin >> N ;

    for (size_t i = 0; i < N; i++)
    {
        int counter = 0 ;
        for (size_t j = 0; j < N; j++)
        {
            if(i>0 && i<N - 1){
                if(counter == i ){
                    cout<<"*";
                    counter ++ ;
                }
                else if(counter > i ){continue;}
                else{cout<<" ";
                counter ++ ;}
            }else{cout<<"*";}
        }
        cout<<endl ;
    }
     
}