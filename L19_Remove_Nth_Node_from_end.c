/*19. Remove Nth Node From End of List
Given the head of a linked list, remove the nth node from the end of the list and return its head.
Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
     struct ListNode* temp=head,*prev;
     int s=0,i,pos;
     while(temp!=NULL)
     {
        temp=temp->next;
        s++;
     }
     pos=s-n;
     if(pos==0)
     {
        temp=head;
        head=head->next;
        free(temp);
        return head;
     }
     prev=NULL;
     temp=head;
     for(i=0;i<pos && temp!=NULL;i++)
     {
        prev=temp;
        temp=temp->next;
     }
     if(temp==NULL)
     {
        return head;
     }
     prev->next=temp->next;
     free(temp);
     return head;
}