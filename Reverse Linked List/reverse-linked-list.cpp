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
    ListNode* reverseList(ListNode* head) {
        vector <int> v;
        ListNode* dhead=head;
        while (dhead) {
            v.push_back(dhead->val);
            dhead=dhead->next;
        }
        int left = 0;
        int right = v.size() - 1;
        while (left < right) {
            swap(v[left], v[right]);
            left++;
            right--;
        }
        ListNode* thead=head;
        for (int j=0; j<v.size(); j++) {
            thead->val=v[j];
            thead=thead->next;
        }
        return head;
    }
};
