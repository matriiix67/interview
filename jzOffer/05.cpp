#include <iostream>
using namespace std;

typedef struct _ListNode {
    int key;
    _ListNode* next;
}ListNode;

void PrintListReversingly(ListNode *head) {
    if(head != nullptr){
        if(head->next != nullptr)
            PrintListReversingly(head->next);
    }

    cout << head->key << endl;
}

int main(int argc, char *argv[])
{

    return 0;
}
