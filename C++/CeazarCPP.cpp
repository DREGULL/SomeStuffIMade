#include<iostream>
#include<cstring>
#include<cctype>
std::string Ceasar_Encryption(char* &plainText , int shift);
void changeLetter(char &_lett, int _lettRank);
int rankingLetter(char _letter);
char* caserDecrypt(char* plainText, int shift);
int main (){
    std::string str_ ;
    return 0;
}


std::string Ceasar_Encryption(char* &plainText, int shift){
    if(shift < 0)return"Change \"Shift_numb\"'s Value To Positive Value";
    for (size_t i = 0; plainText[i] != '\0'; i++)
    {
        
        int curentLettRank = rankingLetter(plainText[i]);
        if(curentLettRank == -1) continue;
        int letterRank = (curentLettRank + shift) % 26;
        if(islower(plainText[i])){changeLetter(plainText[i],letterRank); plainText [i] = tolower(plainText[i]);}
        else changeLetter(plainText[i],letterRank);
        
    }return plainText;
    
}
char* caserDecrypt(char* &plainText, int shift) {
        if (shift > 0) shift *= -1;

        for (size_t i = 0; plainText[i] != '\0'; i++)
        {
            int curentLettRank = rankingLetter(plainText[i]);
            if (curentLettRank == -1)continue;
            int letterRank = (curentLettRank + shift) % 26; 
            if (letterRank < 0)letterRank *= -1;
            changeLetter(plainText[i],shift);
        }

}
void changeLetter(char &_letter, int _lettRank){
    const char* _letter_s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    _letter = _letter_s[_lettRank];
}

int rankingLetter(char _letter){
    
    const char* _letter_s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for (size_t i = 0; i < 26; i++)
    {
        if (_letter == _letter_s[i]) return i;
        else if(_letter == std::tolower(_letter_s[i])) return i;
    }return -1;
    
}