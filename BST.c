#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left;
    struct node *right;
};

struct node *newNode(int key){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node)) ;
    newNode->key=key;
    newNode->left=NULL;
    newNode->right =NULL;
    return newNode;
};

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL) return newNode(key);

    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

int main()
{
    int n,a;
    struct node *root = NULL;
    printf("Enter Size: ");
    scanf("%d",&n);
    printf("Enter Values: ");
    for(int i=0; i<n;i++){
        scanf("%d",&a);
        // Can Also Use Ternary operator
        if(i==0){
            root = insert(root,a);
        }else{

        insert(root,a);
    }}
    inorder(root);
    return 0;
}
