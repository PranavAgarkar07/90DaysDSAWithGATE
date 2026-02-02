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
        ListNode* temp=head;
        vector<int> arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        if(arr.size()==1){
            return true;
        }
        int r=0;
        int l=arr.size()-1;
        bool val=false;
        while(r<l && r!=l){
            if(arr[r]==arr[l]){
                val=true;
            }
            else{
                val=false;
                return val;
            }
            r++;l--;
        }
        return val;
    }
};