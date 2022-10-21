/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        ListNode *temp1 = head;
        int count = 0,mid;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        if(count%2 == 0){
            mid = (count/2) + 1;
            for(int i = 1; i<mid;i++){
                temp1 = temp1->next;
            }
            return temp1;
        }
        else{
            mid = (count/2);
             for(int i = 1; i<=mid;i++){
                temp1 = temp1->next;
            }
            return temp1;
        }
    }
};