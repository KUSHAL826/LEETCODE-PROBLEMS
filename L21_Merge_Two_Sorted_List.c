/* 21 - MERGE TWO SORTED LIST
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: list1 = [], list2 = []
Output: []

Example 3:
Input: list1 = [], list2 = [0]
Output: [0] */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
    struct ListNode *t1=list1,*t2=list2;
    struct ListNode *t=NULL,*head=NULL,*prev=NULL;
    while(t1!=NULL || t2!=NULL)
    {
        t=(struct ListNode*)malloc(sizeof(struct ListNode));
        t->next=NULL;
        if(t1!=NULL && t2!=NULL)
        {
            if(t1->val<t2->val)
            {
                t->val=t1->val;
                t1=t1->next;
            }
            else
            {
                t->val=t2->val;
                t2=t2->next;
            }
        }
        else if(t1!=NULL)
        {
            t->val=t1->val;
            t1=t1->next;
        }
        else
        {
            t->val=t2->val;
            t2=t2->next;
        }
        if(head=NULL)
        {
            head=t;
        }
        else
        {
            prev->next=t;
        }
        prev=t;
    }
    return head;
}