std::string Ceazar_Encryption(std::string &_plainText, int _shift){
    for (size_t i = 0; i < _plainText.size(); i++)
    {
        
        int curentLettRank = rankingLetter(_plainText[i]);
        if(curentLettRank == -1) continue;
        int letterRank = (curentLettRank + _shift) % 26;
        if(islower(_plainText[i])){changeLetter(_plainText[i],letterRank); _plainText [i] = tolower(_plainText[i]);}
        else changeLetter(_plainText[i],letterRank);
        
    }return _plainText;
    
}

void changeLetter(char &_letter, int _lettRank){
    char* _letter_s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    _letter = _letter_s[_lettRank];
}

int rankingLetter(char _letter){
    char* _letter_s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for (size_t i = 0; i < 26; i++)
    {
        if (_letter == _letter_s[i]) return i;
        else if(_letter == std::tolower(_letter_s[i])) return i;
    }return -1;
    
}