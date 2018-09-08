#ifndef MYTOOLS_H
#define MYTOOLS_H
#include<stdint.h>

class MyTool{
private:
    uint8_t* packet_;
public:
    MyTool(uint8_t* packet){
        packet_ = packet;
    } //init packet
    uint16_t search(char* word);
    bool replace(char* target_word, char* your_word);
}

#endif // MYTOOLS_H
