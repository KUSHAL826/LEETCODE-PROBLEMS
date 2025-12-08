/*234 PALINDROME LINKED LIST
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
Example 1:
Input: head = [1,2,2,1]
Output: true

Example 2:
Input: head = [1,2]
Output: false
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) 
{
    struct ListNode* temp=head;
    int *stack,top=-1,count=0;
    while(temp!=NULL)
    {
        
        temp=temp->next;
        count++;
    }
    temp=head;
    stack=(int *)malloc(count*sizeof(int));
    while(temp!=NULL)
    {
        stack[++top]=temp->val;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(stack[top--]!=temp->val)
        {
            return false;
        }
        temp=temp->next;
    }
    return true;
}