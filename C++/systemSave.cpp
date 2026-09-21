#include<iostream>
using namespace std ;

class Person{
    private:
        float height;
        float weight;
        float width;
    public:
        Person(float He,float We,float Wi){
            height=He;
            weight=We;
            width= Wi;
        }
        float getHeight(){
            return height;
        }
        float getWeight(){
            return weight;
        }
        float getWidth(){
            return width;
        }
};
int main (){
    Person ahmed(1.83,85,70);
    FILE * data=fopen("data.txt","a");
    float temp;
    temp=ahmed.getHeight();
    fprintf(data,"\nHeight: %f M",temp);
    temp = ahmed.getWeight();
    fprintf(data,"\nWeight: %f Kg",temp);
    temp=ahmed.getWidth();
    fprintf(data,"\nWidth: %f Cm\n",temp);
    fclose(data);
    return 0 ;
} 