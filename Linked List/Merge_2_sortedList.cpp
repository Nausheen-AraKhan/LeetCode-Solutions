class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode ans(0);
        ListNode* tail = &ans;

        while (list1 && list2) {

            if (list1->val > list2->val) {
                tail->next = new ListNode(list2->val);
                tail = tail->next;
                list2 = list2->next;
            }
            else {
                tail->next = new ListNode(list1->val);
                tail = tail->next;
                list1 = list1->next;
            }
        }

        while (list1) {
            tail->next = new ListNode(list1->val);
            tail = tail->next;
            list1 = list1->next;
        }

        while (list2) {
            tail->next = new ListNode(list2->val);
            tail = tail->next;
            list2 = list2->next;
        }

        return ans.next;
    }
};
