#include <iostream>
#include <exception>
#include <stack>
using namespace std;


template<typename T>
class Queue {
public:
    Queue();
    ~Queue();

    void enqueue(const T& value) {
        stack1.push(value);
    }

    T dequeue() {
        if(stack2.size() <= 0) {
            while(stack1.size() > 0) {
                stack2.push(stack1.pop());
            }
        }

        if(stack2.size() == 0) {
            throw invalid_argument("queue is empty");
        }

        T head = stack2.top();
        stack2.pop();

        return head;
    }
private:
    stack<T> stack1;
    stack<T> stack2;
};

int main(int argc, char *argv[])
{

    return 0;
}
