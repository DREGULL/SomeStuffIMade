#include<iostream>
#include<string>
#include<windows.h>
using namespace std ;
float BMICalcul(float height,float weight ){
    height*=height;
    return weight / height; 
}
int main (){
    notEnd:
    float height;
    float weight;
    cout <<"Enter your weight in Kg: ";
    scanf("%f",&weight);
    cout << "Enter your height in m: ";
    scanf("%f",&height);
    if (weight < 37 || height < 1){
        cout <<"Sorry!...you info is ileagal."<<endl ;
        Sleep(5000);
        goto notEnd;
        return 1;
        
    }
    float BMI =BMICalcul(height,weight);
    if (BMI < 18.5)
    {
        cout <<"Your BMI ="<<BMI<<" Underweight"<<endl;
    }else if (BMI >= 18.5 && BMI< 25){
        cout <<"Your BMI ="<<BMI<<" Healthy Weight"<<endl;
    }else if (BMI >= 25 && BMI<30){
        cout <<"Your BMI ="<<BMI<<" Overweight"<<endl;
    }else if (BMI > 30){
        if (BMI <40){
            if (BMI < 35){
                cout <<"Your BMI ="<<BMI<<" Class 1 Obesity"<<endl;
                Sleep(5000);
                goto notEnd;
                return 0 ;
            }
            cout <<"Your BMI ="<<BMI<<" Class 2 Obesity"<<endl;
            Sleep(5000);
            goto notEnd;
            return 0 ;
        }if (BMI >=40 ){
            cout <<"Your BMI ="<<BMI<<" Class 3 Obesity. (Severe Obesity) ... Sorry for that"<<endl;
        }
    }
    Sleep(5000);
    system("cls");
    goto notEnd;
    return 0 ;
}
// Underweight. Less than 18.5.
// Healthy Weight. 18.5 to less than 25.
// Overweight. 25 to less than 30.
// Obesity. 30 or greater.
// Class 1 Obesity. 30 to less than 35.
// Class 2 Obesity. 35 to less than 40.
// Class 3 Obesity. (Severe Obesity) 40 or greater./