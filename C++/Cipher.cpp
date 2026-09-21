#include <iostream>
#include "pch.h"
#include <cctype>

extern "C"
{
    __declspec(dllexport) char *Ceasar_Encryption(char *plainText, int shift)
    {
        if (shift < 0)
            return "Change \"Shift_numb\"'s Value To Positive Value";
        for (size_t i = 0; plainText[i] != '\0'; i++)
        {

            int curentLettRank = rankingLetter(plainText[i]);
            if (curentLettRank == -1)
                continue;
            int letterRank = (curentLettRank + shift) % 26;
            if (islower(plainText[i]))
            {
                changeLetter(plainText[i], letterRank);
                plainText[i] = tolower(plainText[i]);
            }
            else
                changeLetter(plainText[i], letterRank);
        }
        return plainText;
    }
    void changeLetter(char &_letter, int _lettRank)
    {
        const char *_letter_s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        _letter = _letter_s[_lettRank];
    }
    
    int rankingLetter(char _letter)
    {
    
        const char *_letter_s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        for (size_t i = 0; i < 26; i++)
        {
            if (_letter == _letter_s[i])
                return i;
            else if (_letter == std::tolower(_letter_s[i]))
                return i;
        }
        return -1;
    }
}
