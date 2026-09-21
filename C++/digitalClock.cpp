#include <iostream>
#include <Windows.h>
using namespace std ;

void DigitalClock(){
    size_t second=0 ;
    size_t minut;
    size_t houres ;
    size_t days;
    size_t months;
    size_t years ;
    cout<<"enter minutes: ";
    cin >> minut  ;
    cout<<"enter houres: ";
    cin >> houres  ;
    cout<<"enter days: ";
    cin >> days ;
    cout<<"enter months: ";
    cin >>months ;
    cout<<"enter years: ";
    cin >> years;
    
    while (true ){
        if (second>59){second = 0 , minut ++;}
        if (minut >59 ){minut = 0, houres++;}
        if (houres >23){houres = 0,days ++;}
        if (days >31){days=1 , months ++;}
        if (months>12 ){months = 1 ,years ++; }
        if (years < 1){years =2025;}
        system("cls");
        cout << "Time is : "<<endl<<houres <<':'<<minut<<':'<<second<<endl <<days<<'/'<<months<<'/'<<years<<endl;
        second ++;
        Sleep(1000);
    }

}

int main (){
    DigitalClock();

}