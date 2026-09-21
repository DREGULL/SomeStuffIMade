#include<iostream>

using namespace std ;

int main (){
    int height, width ;
    cout<<"Enter Height : ";
    cin >> height;
    cout<<"Enter width : ";
    cin >> width;
    for (int i = 0 ; i < height; i++ ){
        for (int j = 0 ; j < width ; j++){
            if(i>0 && i<height-1){
                if (j>0 && j<width-1){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }else{cout<<"*";}
        }cout<<endl;
    }
}