//
// Created by Bourne on 2018/3/13.
//

#include <iostream>
using namespace std;

class empty{

};


class MyString {
public:
    MyString(char *data = nullptr);
    MyString(const MyString &str);
    MyString& operator=(MyString &str) {
        if(this != &str) {
            MyString temp_str(str);

            char *temp = temp_str.data_;
            temp_str.data_ = data_;
            data_ = temp;
        }
    }
    ~MyString();
private:
    char *data_;
};

int main(int argc, char* argv[])
{
    cout << sizeof(empty) << endl;
    return 0;
}