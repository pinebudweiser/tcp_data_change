#ifndef MYTOOLS_H
#define MYTOOLS_H
#include<stdint.h>

class MyTool{
private:
    uint8_t* packet_;
    uint32_t len_;
public:
    MyTool(){
        packet_ = 0;
        len_ = 0;
    } //init packet
    void init(uint8_t* packet, uint32_t len)
    {
        packet_ = packet;
        len_ = len;
    }
    uint16_t search(char* word);
    bool replace(char* target_word, char* your_word);
    uint16_t SetTCPCheckSum();
};

#endif // MYTOOLS_H
