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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp = head;
        ListNode *newNode;
        while(temp->next){
            if(temp->val > temp->next->val){
                newNode = new ListNode(GCD(temp->val,temp->next->val));
                newNode->next = temp->next;
                temp->next = newNode;
            } else if(temp->val < temp->next->val){
                newNode = new ListNode(GCD(temp->next->val,temp->val));
                newNode->next = temp->next;
                temp->next = newNode;
            } else{
                newNode = new ListNode(temp->val);
                newNode->next = temp->next;
                temp->next = newNode;
            }
        temp = temp->next->next;
        }

        return head;
    }

    int GCD(int a,int b){
        int r = a%b;
        while(r){
            a = b;
            b = r;
            r = a%b;
        }
        return b;
    }
};