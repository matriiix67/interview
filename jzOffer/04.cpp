#include <iostream>

void replace_blank(char *cstr, int len) {
    if(cstr == nullptr && len <= 0) //
        return;

    int origin_len = 0;
    int num_of_blank = 0;
    int i = 0;
    while(cstr[i] != '\0'){
        ++origin_len;
        if(cstr[i] == ' ')
            ++num_of_blank;
        i++;
    }

    int new_len = origin_len + num_of_blank * 2;
    if(new_len > len)
        return;

    int index_of_origin = origin_len;
    int index_of_new = new_len;
    while(index_of_origin >= 0 && index_of_new > index_of_origin) {
        if(cstr[index_of_origin] == ' '){
            cstr[index_of_new--] = '0';
            cstr[index_of_new--] = '2';
            cstr[index_of_new--] = '%';
        } else {
            cstr[index_of_new--] = cstr[index_of_origin];
        }
        --index_of_origin;
    }
}


int main(int argc, char *argv[])
{
    char cstr[128] = "We are happy";
    std::cout << cstr << std::endl;
    replace_blank(cstr, 128);
    std::cout << cstr << std::endl;
    return 0;
}
