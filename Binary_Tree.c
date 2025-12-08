#include <stdio.h>
#include <stdlib.h>
struct Treenode
{
    int data;
    struct Treenode *left;
    struct Treenode *right;
};
typedef struct Treenode *Node;
Node create_Node(int data)
{
    Node newnode=(Node)malloc(sizeof(struct Treenode));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Node create_tree()
{
    int val;
    printf("Enter data (-1 for no node): ");
    scanf("%d",&val);
    if(val==-1)
    {
        return NULL;
    }
    Node root=(Node)malloc(sizeof(struct Treenode));
    root->data=val;
    printf("Enter left child of %d: ",val);
    root->left=create_tree();
    printf("Enter right child of %d: ",val);
    root->right=create_tree();
    return root;
}
void inorder(Node root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(Node root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
int main()
{
    Node root=NULL;
    root=create_tree();
    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");
    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");
    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");
    return 0;
}
