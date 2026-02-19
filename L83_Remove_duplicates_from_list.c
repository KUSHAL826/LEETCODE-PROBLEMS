/*Remove Duplicates from Sorted List
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

Example 1:
Input: head = [1,1,2]
Output: [1,2]

Example 2:
Input: head = [1,1,2,3,3]
Output: [1,2,3]*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    if(head==NULL)
    {
        return NULL;
    }
    struct ListNode* cur=head->next,*prev=head;
    while(cur!=NULL)
    {
        if(cur->val==prev->val)
        {
            cur=cur->next;
        }
        else
        {
            prev->next=cur;
            prev=cur;
            cur=cur->next;
        }
        
    }
    prev->next=NULL;
    return head;
}