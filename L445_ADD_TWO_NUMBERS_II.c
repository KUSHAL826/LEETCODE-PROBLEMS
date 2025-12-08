/*445. Add Two Numbers II
You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Example 1:
Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]
Example 2:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [8,0,7]
Example 3:

Input: l1 = [0], l2 = [0]
Output: [0]
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int stack1[50],stack2[50],top1=-1,top2=-1;
    struct ListNode *head=NULL,*p;
    int s=0;
    while(l1!=NULL)
    {
        stack1[++top1]=l1->val;
        l1=l1->next;
    }
    while(l2!=NULL)
    {
        stack2[++top2]=l2->val;
        l2=l2->next;
    }
    while(top1>=0 || top2>=0 || s!=0)
    {
        if(top1>=0)
        {
            s+=stack1[top1--];
        }
        if(top2>=0)
        {
            s+=stack2[top2--];
        }
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=s%10;
        p->next=NULL;
        s=s/10;
        p->next=head;
        head=p;
    }
    return head;
}