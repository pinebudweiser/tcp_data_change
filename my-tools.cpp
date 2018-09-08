#include "my-tools.h"
#include <string.h>

uint16_t MyTool::search(char* word)
{
    uint8_t* index;
    uint8_t wordLen = strlen(word);
    uint64_t start = 0;


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
                memcpy(index, "ckhaing", wordLen);
                return (uint16_t)(index - packet_); // return index
            }
        }while(index);

    }


    return 0; // false
}

bool MyTool::replace(char* target_word, char* your_word)
{

}
