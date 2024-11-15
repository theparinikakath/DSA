/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //NAIVE SOLN - ALSO MINE
        //HASHING
        // map<ListNode*,int> mpp;
        // ListNode* temp=head;
        // while(temp!=NULL)
        // {
        //     if(mpp.find(temp)!=mpp.end())
        //         return true;
        //     else
        //         mpp[temp]=1;
        //     temp=temp->next;
        // }
        // return false;


        //OPTIMAL: TORTOISE HARE ALGO
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};