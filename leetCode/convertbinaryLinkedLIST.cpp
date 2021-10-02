class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s;
        while(head!=NULL){
                int data = head->value;
                char x = (data == 1)? '1': '0';
                s = s+x;
                head = head->next;
        }
    }
};
