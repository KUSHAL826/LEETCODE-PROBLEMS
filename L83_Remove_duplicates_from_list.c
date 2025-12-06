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
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    if(head==NULL)
    {
        return NULL;
    }
    struct ListNode*prev=head,*temp=head->next;
    while(temp!=NULL)
    {
        if(prev->val==temp->val)
        {
            temp=temp->next;
            continue;
        }
        prev->next=temp;
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    return head;
}
