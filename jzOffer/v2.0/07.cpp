//
// Created by Bourne on 2018/3/14.
//

#include <stack>
#include <iostream>
using namespace std;


template <typename T>
class Queue {
public:
    Queue();
    ~Queue();

    void enqueue(const T& e) { // 没有变化，只入stack1
        stack1.push(e);
    }

    T dequeue() { //
        T result;
        if(stack2.empty()) {
            while(!stack1.empty()) {
                T& tmp = stack1.top();
                stack2.push(tmp);
                stack1.pop();
            }
        } else {
            result = stack2.top();
            stack2.pop();
        }

        return result;
    }
private:
    stack<T> stack1;
    stack<T> stack2;
};