#include <iostream>
#include <stack>
using namespace std;

template<typename T>
class StackWithMin{
public:
    void push(const T& value) {
        data.push(value);

        if(min.size() == 0 || value < min.top())
            min.push(value);
        else
            min.push(min.top());
    }

    void pop(){
        assert(data.size() > 0 && min.size() > 0);
        data.pop();
        min.pop();
    }

    const T& minimun() const {
        assert(data.size() > 0 && min.size() > 0);
        return min.top();
    }
private:
    stack<T> data;
    stack<T> min;
};
