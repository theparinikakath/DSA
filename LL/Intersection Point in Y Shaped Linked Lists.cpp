class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        //Better soln
        // Node* temp1=head1;
        // Node* temp2=head2;
        // int n1=0,n2=0;
        // Node* key;
        // while(temp1!=NULL)
        // {
        //     n1++;
        //     temp1=temp1->next;
        // }
        // while(temp2!=NULL)
        // {
        //     n2++;
        //     temp2=temp2->next;
        // }
        // temp1=head1;
        // temp2=head2;
        // int diff=0;
        // if(n1>n2){
        //     diff=n1-n2;
        //     for(int i=0;i<diff;i++)
        //     {
        //         temp1=temp1->next;
        //     }
        // }
        // else{
        //     diff=n2-n1;
        //     for(int i=0;i<diff;i++)
        //     {
        //         temp2=temp2->next;
        //     }
        // }
        // while(temp1!=NULL && temp2!=NULL)
        // {
        //     if(temp1==temp2){
        //         key=temp1;
        //         return key->data;
        //     }
        //     else
        //     {
        //         temp1=temp1->next;
        //         temp2=temp2->next;
        //     }
        // }
        
        // return -1;
        
        
        
        
        
        
        //Optimal
        if(head1==NULL || head2==NULL) //base case
        {
            return -1;
        }
        Node* temp1=head1;
        Node* temp2=head2;
        while (temp1 != temp2) {
            if (temp1 == NULL) {
                temp1 = head2;
            } else {
                temp1 = temp1->next;
            }
    
            if (temp2 == NULL) {
                temp2 = head1;
            } else {
                temp2 = temp2->next;
            }
        }
        return temp1->data;
        
        
    }
};