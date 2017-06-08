//
// Created by Bourne on 2017/6/1.
//

#include <iostream>
using namespace std;


void Reverse(char *begin, char *end)
{
    if(begin == nullptr || end == nullptr)
        return ;

    while(begin < end) {
        char temp = *begin;
        *begin = *end;
        *end = temp;

        begin++;
        end--;
    }
}


char* ReverseSentence(char *data)
{
    if(data == nullptr) {
        return nullptr;
    }

    // 获得头尾指针
    char *begin = data;
    char *end = data;
    while(*end != '\0')
        end ++;
    end--;

    // 翻转整个句子
    Reverse(begin, end);

    begin = end = data;
    while(*begin != '\0') {
        if(*begin == ' ') {
            begin++;
            end++;
        } else if (*end == ' ' || *end == '\0') {
            Reverse(begin, --end);
            begin = ++end;
        } else {
            end++;
        }
    }

    return data;
}


char* LeftRotateString(char *str, int n)
{
    if(str != nullptr) {
        int length = static_cast<int>(strlen(str));
        if(length > 0 && n > 0 && n < length) {
            char *first_start = str;
            char *first_end = str + n - 1;
            char *second_start = str + n;
            char *second_end = str + length - 1;

            Reverse(first_start, first_end);
            Reverse(second_start, second_end);
            Reverse(first_start, second_end);
        }
    }

    return str;
}

int main()
{
    cout << "main start ..." << endl;

    cout << "main end ..." << endl;
    return 0;
}


