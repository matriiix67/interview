#include <iostream>
using namespace std;

int numof1(int n) {
    int count = 0;
    while(n) {
        ++count;
        n = (n - 1) & n;
    }

    return count;
}


int main(int argc, char *argv[])
{
    cout << numof1(17) << endl;
    return 0;
}
