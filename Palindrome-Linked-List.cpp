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
    bool isPalindrome(ListNode* head) {
        ListNode* right= head;
        vector<int> nums;
        if(head->next==nullptr) return true;
        while(right->next!=nullptr){
            nums.push_back(right->val);
            right= right->next;     
        }
        nums.push_back(right->val);
        int left= 0;
        int righti= nums.size()-1;
        while(left<righti){
            if(nums[left]!=nums[righti]){
                
                return false;
            }
            left++;
            righti--;

        }
        return true;
    }
};