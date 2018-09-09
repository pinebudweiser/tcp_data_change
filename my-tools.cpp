#include "my-tools.h"
#include <stdio.h>
#include <string.h>

uint16_t MyTool::search(char* word)
{
    uint8_t* index;
    uint8_t wordLen = strlen(word);

    if(len_ != 0)
    {
        index = (uint8_t*)memchr(packet_, word[0], len_);
        do{
            uint8_t match = 0;

            index++;
            index = (uint8_t*)memchr(index, word[0], len_);
            if(index == 0)
            {
                break;
            }
            for(int i = 0; i < wordLen; i++)
            {
                if(index[i] == (uint8_t)word[i])
                {
                    match++;
                }
            }
            if(match == wordLen)
            {
                memcpy(index, "HOOKING", wordLen);
                //return (uint16_t)(index - packet_); // return index
            }
        }while(index);
    }
    return 0; // false
}

bool MyTool::replace(char* target_word, char* your_word)
{

}

uint16_t MyTool::SetTCPCheckSum()
{
    uint32_t result = 0;
    uint8_t carry = 0;
    int i = 0;

    if(len_)
    {
        for(i = 0; i < len_-1; i+=2)
        {
            result += ((packet_[i] << 8) + (packet_[i+1]));
        }
        if(len_ % 2) // if odd num
        {
            result += packet_[i];
        }
        carry = (result & 0xFF0000) >> 16;
        result += carry;
        result = ~result;
    }
    return (uint16_t)result;
}
