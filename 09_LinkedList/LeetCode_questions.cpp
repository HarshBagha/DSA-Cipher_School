// QUESTION NUMBER:: 876


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
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         // ListNode* s = head;
//         // int len = 0;
//         // while(s!=NULL){
//         //    s=  s->next;
//         //     len++;
//         // }
//         // ListNode* ans = head;
//         // int count = len/2;
//         // while(count--){
//         //     ans = ans->next;
//         // }
//         // return ans;

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast -> next != NULL){
//             slow = slow ->next;
//             fast = fast ->next->next;
//         }
//         return slow;
//     }
// };

// 25. Reverse Nodes in k-Group

/*
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // BASE CASE
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        int count = 0;


        while(temp != NULL && count <k){
            temp = temp->next;
            count++;
        }
        if(count<k) return head;

        count = 0;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        
        
        while(curr!=NULL && count < k){

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if(next != NULL){
          head -> next = reverseKGroup(next, k);
        }
        return prev;
    }
};
*/


// ======================================================================================================================

// Question: 161 
/*
*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;

        ListNode* a = headA;
        ListNode* b = headB;

        while(a!=b){
            if(a==NULL) a= headB;
            else a = a->next;

            if(b==NULL) b = headA;
            else b = b->next;
        }
        return a;
    }
};

*/