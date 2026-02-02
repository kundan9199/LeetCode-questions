class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr)
        return head;

        while(head != nullptr && head->val == val)
        head = head->next;

        ListNode* ans = head;
        if(ans == nullptr)
        return ans;

        while(head->next != nullptr){
            if(head->next->val == val){
                head->next = head->next->next;
            }else{
                head = head->next;
            }
        }
        return ans;
    }
};