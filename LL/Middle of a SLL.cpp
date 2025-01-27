class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //Optimal time and space but time can still be improved
        // ListNode* temp=head;
        // int n=0;
        
        // while(temp!=nullptr)
        // {
        //     n++;
        //     temp=temp->next;
        // }
        // temp=head;
        // for(int i=0;i<n/2;i++)
        // {
        //     temp=temp->next;
        // }
    //return temp;


    //Time improved solution:
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=nullptr && fast->next!=nullptr)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
    }
};
