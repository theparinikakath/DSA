class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // ListNode* temp=head;
        // stack<int>st;
        // //Time=O(N) & Space=O(N)
        // while(temp!=NULL)
        // {
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=NULL)
        // {
        //     temp->val=st.top();
        //     st.pop();
        //     temp=temp->next;
        // }
        // return head;
        
        //Iterative
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* front=NULL;
        while(temp!=NULL)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;


        //Recursive
        // if(head==NULL||head->next==NULL)
        // {
        //     //Only 1 node is present
        //     return head;
        // }
        // ListNode* newHead=reverseList(head->next);
        // ListNode* front=head->next;
        // front->next=head;
        // head->next=NULL;
        // return newHead;
    }
};