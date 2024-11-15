class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        //Optimal- Tortoise hare algo
        Node* slow=head;
        Node* fast=head;
        //Node* start=NULL;
        int c=1;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                //found first collision node
                //now send back slow to head again
                slow=slow->next;
                while(slow!=fast)
                {
                    slow=slow->next;
                    c++;
                    //and we found the starting node of the LL
                }
                return c;
            }
        }
        return 0;
    }
};