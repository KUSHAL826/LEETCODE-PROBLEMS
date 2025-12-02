/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode*l1 , struct ListNode* l2)
{
    struct ListNode* head=NULL;
    struct ListNode *p, *q;
    int s=0;
    while(l1!=NULL || l2!=NULL || s!=0)
    {
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        if(l1!=NULL)
        {
            s+=l1->val;
            l1=l1->next;
        }
        
        if(l2!=NULL)
        {
            s+=l2->val;
            l2=l2->next;
        }
        p->val=s%10;
        p->next=NULL;
        s=s/10;
        if(head==NULL)
        {
            head=p;
        }
        else
        {
            q->next=p;
        }
        q=p;
    }
    return head;
}
