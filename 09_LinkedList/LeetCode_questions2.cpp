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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *s = head;
        ListNode *f = head;

        for(int i =0;i<n ;i++){
            f = f->next;
        }

        if(!f){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        while(f->next){
            f = f->next;
            s = s->next;
        }

        // Delete the node from nth index: 

        ListNode* nodeToDelete = s->next;
        s->next = s->next->next;   
        delete nodeToDelete;

        return head;


    
    }
};

*/

/*
Question Number: 328

/*

 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenhead = even;

        while(even!=NULL && even->next !=NULL){
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }
        odd ->next = evenhead;
        return head;
    }
};


*/