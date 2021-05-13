#ifndef WORD_H
#define WORD_H
#include <iostream>

using namespace std;
class Word
{
private:
    string text;
    string translation;
    string group;

public:
    string getText();
    string getTranslation();
    string getGroup();
};

string Word::getText(){
    return text;
}

string Word::getTranslation(){
    return translation;
}

string Word::getGroup(){
    return group;
}

#endif