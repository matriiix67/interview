#include <iostream>
using namespace std;

long long fibonacci(unsigned n) {
    int result[2] = {0, 1};
    if(n < 2)
        return result[n];

    long long fib_n = 0;
    long long fib_n_minus_one = 0;
    long long fib_n_minus_two = 1;
    for(unsigned i = 2; i <= n; ++i) {
        fib_n = fib_n_minus_one + fib_n_minus_two;

        fib_n_minus_one = fib_n_minus_two;
        fib_n_minus_two = fib_n;
    }

    return fib_n;
}


int main(int argc, char *argv[])
{
    cout << fibonacci(6) << endl;
    return 0;
}
