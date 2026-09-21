#include <iostream>
#include <Windows.h>
#include <string>
#include <cstring>

using namespace std;
class Visa{
    private:
        size_t cardNumber;
        string nameOfOwner;
        int AOCC;
    public:
    void setCardNumber(size_t N){
        cardNumber = N;
    }
    int getAOOC(){
        return AOCC;
    }
    void AOCCProcesse(size_t AOCCEditer){
        AOCC = AOCCEditer;
    }
    void setNameOfOwner(string N){
        nameOfOwner = N;

    }
    size_t getCardNumber(){
        return cardNumber ;
    }
    string getNameOfOwner(){
        return nameOfOwner;
    }
};

bool codeCheck(Visa ob1){
    size_t EnterNumber;
    string EnterName;
    cout <<endl << "Enter your account's name : ";
    cin >> EnterName;
        for (size_t i = 0; i < 3; i++){
            cout << endl << "Enter your card Number : ";
            cin >> EnterNumber;if(EnterName=="Exit") return false;

            if (ob1.getCardNumber() == EnterNumber) {return true;}
            if(ob1.getCardNumber() != EnterNumber && i<2) {cout <<"Sorry! The number is wrong , try againg "<<endl ; }
    }cout << endl <<"Sorry we can't give you the card , go talk with costmers."<<endl;
    return false ;
}
void Menu(){
    cout << "---------Menu---------"<<endl;
    cout << "**********************"<<endl;
    cout << "To see your amount enter --->1"<<endl;
    cout << "**********************"<<endl;
    cout << "To withdraw enter ---------> 2 "<< endl;
    cout << "**********************"<<endl;
    cout << "To deposit amount enter ---> 3"<<endl;
    cout << "**********************"<<endl;
    cout << "Exit ----------------------> 4"<<endl;
    cout << "**********************"<<endl;
}
int main (){
    FILE *Stocker = fopen("data.txt","r");
    char Name[25],code[13];
    int Codee=-404;
    char * nameEnter;
    char *endptr;
    size_t ptr = ftell(Stocker);
    cout << ptr<<endl ;
    cout << "enter your name : ";
    cin>>nameEnter;
    while(fgets(Name,25,Stocker) != NULL){
        strtok(Name,"\n");
        if(strcmp(Name,nameEnter) == 0){
            fgets(code,13,Stocker);
            Codee = strtol(code,&endptr,10);
        }
    }if(Codee==-404){
        printf("Sorry!... The name you enter does not exist\n");
    }
    fclose(Stocker);
    // system("cls");
    Visa ob1;
    size_t choice;

    ob1.setCardNumber(Codee);
    
    ob1.setNameOfOwner(Name);

    ob1.AOCCProcesse(1500);
    // system("cls");
    if(codeCheck(ob1) == true) {

        system("cls");
        choiceee:
        Menu();
        cout << "Enter Your choice : ";
        cin >> choice;
        system("cls");
        switch (choice) {
            case 1:
            cout << "You'r amount is : "<<ob1.getAOOC()<<endl;goto choiceee;
            break ;
            case 2 :
            renter: cout <<"How much you want take : "<<endl;
            size_t ATT;
            cin >> ATT; 
            if(ATT <10 || ATT >5000) {cout << "Sorry!... You can't take mor than 5000$ or less than 10$ ."<< endl ; goto choiceee ;}
            if(ATT > ob1.getAOOC()) {cout <<"You'r amount is more than how much you have . Sorry!..."<<endl;  goto choiceee;}
            ob1.AOCCProcesse(ob1.getAOOC()-ATT);
            cout << "Your processe ends succesfuly!."<<endl; goto choiceee;
            break;
            case 3:
            size_t ATA;
            cout <<"How much you want to add :";
            cin >> ATA;
            if(ATA <10 || ATA >5000) {cout << "Sorry!... You can't add mor than 5000$ or less than 10$ ."<< endl ; goto choiceee;}
            ob1.AOCCProcesse(ATA+ob1.getAOOC());
            cout << "Your processe ends succesfuly!."<<endl;goto choiceee;
            break;
            case 4:
            goto EXIT;
        }

    }else{
        cout<<"Sorry!,you can't make operation at you card "<<endl;
    }
    EXIT:
    cout <<"Have a good day!"<<endl;
    Sleep(5000);
    system("cls");

    // cout <<"Amount = "<<ob1.getAOOC()<<endl;
    return 0;
}
