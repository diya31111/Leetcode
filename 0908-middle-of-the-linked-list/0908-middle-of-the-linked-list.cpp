class Solution {
public:
    ListNode* middleNode(ListNode* head){
        ListNode *temp = head;
        int ctr = 0;
        while(temp != nullptr){
            temp = temp->next;
            ctr++;
        }

        int mid = ctr / 2;
        temp = head;
        while(mid--){
            temp = temp->next;
        }

        return temp;
    }
};