#ifndef CTEXT_H
#define CTEXT_H
#include<string>

class CText
{
private:
    std::string text;    
public:
    CText();
    CText(std::string text_);
    ~CText();

    std::string getText();
};

#endif
