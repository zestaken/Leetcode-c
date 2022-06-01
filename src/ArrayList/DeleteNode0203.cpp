#include "ListNode.h"
#include <iostream>

using namespace std;
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main() {
    Solution s;
    ListNode* head = Utils::makeSinglylinkedList({1, 2, 3, 4, 5});
    s.deleteNode(head->next);
    ListNode* node = head;
    while (node != nullptr) {
        cout << node->val << endl;
        node = node->next;
    }

}