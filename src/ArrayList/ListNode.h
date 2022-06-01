#include <iostream>
#include <vector>

using namespace std;
//Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}

};

class Utils {
public:
    static ListNode* makeSinglylinkedList(vector<int> list) {
        ListNode conCurrent;
        for (int i = list.size() - 1; i >= 0; i--) {
            ListNode *node = new ListNode(list[i]);
            node->next = conCurrent.next;
            conCurrent.next = node;
        }
        return conCurrent.next;
    }
};
