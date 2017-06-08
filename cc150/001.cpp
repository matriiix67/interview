#include <iostream>
#include <string.h>


bool is_unique(char *str)
{
    if(strlen(str) > 256)
        return false;

    bool char_set[256] = {false};

    for(int i = 0; i < strlen(str); i++) {
        if(char_set[str[i]])
            return false;
        char_set[str[i]] = true;
    }

    return true;
}

int main() {
    std::cout << "001 start ..." << std::endl;

    char hello[16] = "abcdefg";
    std::cout << is_unique(hello) << std::endl;

    std::cout << "001 end ..." << std::endl;
    return 0;
}