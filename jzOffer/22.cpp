#include <iostream>
#include <stack>

using namespace std;

bool IsPopOrder(const int* push, const int* pop, int len) {
    bool possible = false;

    if(push != nullptr && pop != nullptr && len > 0) {
        const int* next_push = push;
        const int* next_pop = pop;

        stack<int> stack_data;
        while(next_pop - pop < len) {
            while(stack_data.empty() || stack_data.top() != *next_pop) {
                if(next_push - push == len) {
                    break;
                }

                stack_data.push(*next_push);
                next_push++;
            }

            if(stack_data.top() != *next_pop)
                break;

            stack_data.pop();
            next_pop++;
        }

        if(stack_data.empty() && next_pop - pop == len)
            possible = true;
    }

    return possible;
}
