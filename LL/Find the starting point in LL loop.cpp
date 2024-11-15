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
    ListNode *detectCycle(ListNode *head) {
        //Brute force- Hashing as used in Detecting a loop in SLL
        // map<ListNode*,int> mpp;
        // ListNode* temp=head;
        // while(temp!=NULL)
        // {
        //     if(mpp.find(temp)!=mpp.end())
        //         return temp;
        //     else{
        //         mpp[temp]=1;
        //     }
        //     temp=temp->next;
        // }
        // return NULL;

        //Optimal
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                //there is a loop definitely
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;//can return fast too-- they r same
            }
        }
        return NULL;
    }
};