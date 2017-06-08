//
// Created by Bourne on 2017/6/6.
//

#include <iostream>
using namespace std;

template<typename T>
class MakeSealed
{
    friend T;
private:
    MakeSealed() {}
    ~MakeSealed() {}
};

class SealedClass2 : virtual public MakeSealed<SealedClass2>
{
public:
//    SealedClass2() {}
//    ~SealedClass2() {}
};

int main()
{
    cout << "48 start ..." << endl;

    cout << "48 end ..." << endl;
    return 0;
}