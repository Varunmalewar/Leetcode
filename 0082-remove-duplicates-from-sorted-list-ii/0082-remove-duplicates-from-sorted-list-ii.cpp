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
   ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL) return NULL;

    // ✅ Step 1: Agar head khud duplicate hai toh naya head dhundho
    while(head != NULL && head->next != NULL && head->val == head->next->val) {
        int dupVal = head->val;
        while(head != NULL && head->val == dupVal) {
            head = head->next;
        }
    }

    if(head == NULL) return NULL;

    // ✅ Step 2: Baaki list process karo (same style as yours)
    ListNode *temp = head;
    ListNode *nextnode = head->next;

    while(nextnode != NULL) {
        if(nextnode->next != NULL && nextnode->val == nextnode->next->val) {
            int dupVal = nextnode->val;
            while(nextnode != NULL && nextnode->val == dupVal) {
                nextnode = nextnode->next;
            }
            temp->next = nextnode;   // duplicates skip karke link karo
        } else {
            temp = nextnode;         // no duplicate, aage badho
            nextnode = nextnode->next;
        }
    }

    return head;

    }
};