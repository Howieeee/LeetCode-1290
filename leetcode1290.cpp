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
    int getDecimalValue(ListNode* head) {
        int count = 0;
        auto it = head;
        vector<int>num;
        num.push_back(head->val);
        while(it->next){
            it = it->next;
            count++;
            num.push_back(it->val);
        }
        int ans = 0;
        for(int i=0;i<num.size();i++,count--)
            ans += num[i] * pow(2,count);
        
        //cout << ans << endl;
        
        return ans;
    }
};
