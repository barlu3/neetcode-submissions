/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        if (!curr->next) { head = nullptr; return head; }
        int counter = 1;
        while (curr->next) {
            counter++; curr = curr->next;
        }

        int target = counter - n;
        int i = 0;

        ListNode* prev = nullptr;
        curr = head;
        while (curr) {
            if (i != target) {
                i++;
                prev = curr;
                curr = curr->next;
            }
            else {
                ListNode* victim = curr;
                if (!prev) {
                    curr = curr->next;
                    head = curr;
                }
                else {
                    prev->next = curr->next;
                    curr = curr->next;
                }
                delete victim;
                break;
            }
        }

        return head;
    }
};
