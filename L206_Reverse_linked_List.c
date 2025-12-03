/*
206. Reverse Linked List

Reverse a singly linked list.

click to show more hints.

Hint:
A linked list can be reversed either iteratively or recursively. Could you implement both?
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) 
{
    struct ListNode *curnode,*prevnode,*nextnode;
    prevnode=NULL;
    curnode=nextnode=head;
    while(curnode!=NULL)
    {
        nextnode=nextnode->next;
        curnode->next=prevnode;
        prevnode=curnode;
        curnode=nextnode;
    }
    return prevnode;
}