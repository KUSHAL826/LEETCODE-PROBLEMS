/*Sort List 
Given the head of a linked list, return the list after sorting it in ascending order.
Example 1:
Input: head = [4,2,1,3]
Output: [1,2,3,4]

Example 2:
Input: head = [-1,5,3,4,0]
Output: [-1,0,3,4,5]

Example 3:
Input: head = []
Output: []
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* sortList(struct ListNode* head) 
{
    int i,j,*arr,x,count=0;
    struct ListNode* temp=head,*prev,*res=NULL;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    temp=head;
    arr=(int *)malloc(count*sizeof(int));
    count=0;
    while(temp!=NULL)
    {
        arr[count++]=temp->val;
        temp=temp->next;
    }
    for(i=0;i<count-1;i++)
    {
        for(j=0;j<count-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
    head=NULL;
    for(i=0;i<count;i++)
    {
        res=(struct ListNode*)malloc(sizeof(struct ListNode));
        res->val=arr[i];
        res->next=NULL;
        if(head==NULL)
        {
            head=res;
        }
        else
        {
            prev->next=res;
        }
        prev=res;
    }
    return head;
}


/*CODE IS CORRECT BUT TIME EXCEEDED MESSAGE IN LEETCODE */
