//
// Created by Bourne on 2018/3/21.
//

#include <map>


struct RandomListNode
{
    int label;
    RandomListNode *next, *random;

    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};


// 两次遍历
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head) return nullptr;

        RandomListNode* newList = new RandomListNode(head->label);
        RandomListNode* newCur = newList;

        RandomListNode* cur = head->next;
        std::map<RandomListNode*, RandomListNode*> m;
        m[head] = newList;
        while(cur) {
            RandomListNode* tmp = new RandomListNode(cur->label);
            newCur->next = tmp;
            m[cur] = tmp;
            newCur = newCur->next;
            cur = cur->next;
        }

        cur = head;
        newCur = newList;
        while(newCur) {
            newCur->random = m[cur->random];
            newCur = newCur->next;
            cur = cur->next;
        }

        return newList;
    }
};
