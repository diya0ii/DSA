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
    int numComponents(ListNode* head, vector<int>& nums) {
        ListNode * temp = head;
        int ans=0,tans=0;
        while(temp!=NULL)
        {
            auto it = find(nums.begin(), nums.end(), temp->val);
            if (it != nums.end()) {
                if(temp->next==NULL) ans++;
                temp = temp->next;
                tans=1;
                continue;
            } else {
                temp = temp->next;
                ans+=tans;
                tans=0;
            }
        }
        return ans;
    }
};