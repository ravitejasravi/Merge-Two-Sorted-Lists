class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* Dummy = new ListNode(-1);
        ListNode* p3 = Dummy;
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        
        while(p1!=NULL && p2!=NULL)
        {
            if(p1->val < p2->val)
            {
                p3 -> next = p1;
                p3 = p3 -> next;
                p1 = p1 -> next;
            }
            else
            {
                p3 -> next = p2;
                p3 = p3 -> next;
                p2 = p2 -> next;
            }
        }
        
        while(p1!=NULL)
        {
             p3 -> next = p1;
             p3 = p3 -> next;
             p1 = p1 -> next;
        }
        while(p2!=NULL)
        {
             p3 -> next = p2;
             p3 = p3 -> next;
             p2 = p2 -> next;
        }
       return Dummy -> next; 
    }
};
